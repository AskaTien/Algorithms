#pragma once

#include <vector>
#include <string>
#include <iostream>

namespace Algorithms
{
	class FixedCapacityStackOfStrings
	{
	public:
		FixedCapacityStackOfStrings(const size_t& cap)
		{
			a = new std::string[cap];
		}
		
		void Push(const std::string& item)
		{
			*(a + N++) = item;
		}
		
		std::string Pop()
		{
			return *(a + --N);
		}

		bool IsEmpty() { return N == 0; }
		size_t Size() { return N; }

		static void MainTest(const std::vector<std::string>& args)
		{
			FixedCapacityStackOfStrings s(100);
			std::string item;
			while (std::cin >> item)
			{
				if (item != "-") 
				{
					s.Push(item);
				}
				else if (!s.IsEmpty()) 
				{
					std::cout << s.Pop() + " ";
				}
			}
			std::cout << "(" << s.Size() << " left on stack)" << std::endl;
		}

	private:
		std::string* a = nullptr;
		size_t N = 0;
	};
}