#include "Flips.h"

using namespace std;

void Flips::MainTest(const vector<string>& args)
{
	int T = stoi(args[0]);
	Counter heads("heads");
	Counter tails("tails");
	default_random_engine generator;
	bernoulli_distribution distribution(0.5);
	for (int i = 0; i < T; i++)
	{
		if ((distribution(generator))) heads.Increment();
		else tails.Increment();
	}
	cout << heads << endl;
	cout << tails << endl;
	int d = heads.Tally() - tails.Tally();
	cout << "delta: " << abs(d) << endl;
}
