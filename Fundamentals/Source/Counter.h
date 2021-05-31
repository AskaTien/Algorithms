#pragma once

#include <string>
#include <iostream>

class Counter
{
public:
	Counter() = default;
	Counter(const std::string& id);
	void Increment();
	int Tally() const;
	friend std::ostream& operator<<(std::ostream& os, const Counter& counter)
	{
		return os << counter.count << " " + counter.name;
	}

private:
	std::string name;
	int count = 0;
};
