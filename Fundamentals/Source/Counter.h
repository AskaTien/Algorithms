#pragma once

#include <string>
#include <iostream>

class Counter
{
public:
	Counter(std::string id);
	void Increment();
	int Tally();
	friend std::ostream& operator<<(std::ostream& output, const Counter& counter)
	{
		return output << counter.count << " " + counter.name;
	}
private:
	std::string name;
	int count = 0;
};
