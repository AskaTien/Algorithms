#pragma once

#include <vector>
#include <string>

namespace Algorithms
{
	template<typename Item>
	class FixedCapacityStack
	{
	public:
		FixedCapacityStack(const size_t& cap)
		{
			a = new Item[cap];
		}

		void Push(const Item& item)
		{
			*(a + N++) = item;
		}

		Item Pop()
		{
			return *(a + --N);
		}

		bool IsEmpty() { return N == 0; }
		size_t Size() { return N; }

		static void MainTest(const std::vector<std::string>& args)
		{
			FixedCapacityStack<std::string> s(100);
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
		Item* a = nullptr;
		size_t N = 0;
	};
}