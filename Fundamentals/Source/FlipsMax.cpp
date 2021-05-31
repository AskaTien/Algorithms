#include "FlipsMax.h"

#include <random>
#include <iostream>

using namespace std;

Counter FlipsMax::Max(const Counter& x, const Counter& y)
{
	return x.Tally() > y.Tally() ? x : y;
}

void FlipsMax::MainTest(const std::vector<std::string>& args)
{
	int T = stoi(args[0]);
	Counter heads("heads");
	Counter tails("tails");
	random_device rd;
	mt19937_64 generator(rd());
	bernoulli_distribution distribution(0.5);
	for (int i = 0; i < T; i++)
	{
		if ((distribution(generator))) heads.Increment();
		else tails.Increment();
	}

	if (heads.Tally() == tails.Tally())
	{
		cout << "Tie" << endl;
	}
	else
	{
		cout << Max(heads, tails) << " wins" << endl;
	}
}
