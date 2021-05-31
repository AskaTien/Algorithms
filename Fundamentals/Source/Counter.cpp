#include "Counter.h"

using namespace std;

Counter::Counter(string id) : name(id)
{
}

void Counter::Increment()
{
	count++;
}

int Counter::Tally()
{
	return count;
}
