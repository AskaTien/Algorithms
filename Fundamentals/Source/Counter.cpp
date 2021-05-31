#include "Counter.h"

using namespace std;

Counter::Counter(const string& id) : name(id)
{
}

void Counter::Increment()
{
	count++;
}

int Counter::Tally() const
{
	return count;
}
