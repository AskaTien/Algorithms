#pragma once

#include <string>
#include <iostream>

namespace Algorithms
{
	class Counter
	{
	public:
		Counter() = default;
		Counter(const std::string& id) : name(id)
		{
		}

		void Increment()
		{
			count++;
		}

		int Tally() const
		{
			return count;
		}

		friend std::ostream& operator<<(std::ostream& os, const Counter& counter)
		{
			return os << counter.count << " " + counter.name;
		}

	private:
		std::string name;
		int count = 0;
	};
}
