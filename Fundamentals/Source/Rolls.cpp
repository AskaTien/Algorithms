#include "Rolls.h"

#include <random>

using namespace std;

void Rolls::MainTest(const std::vector<std::string>& args)
{
	int T = stoi(args[0]);
	int SIDES = 6;
	Counter rolls[6 + 1];
	for (int i = 1; i <= SIDES; i++)
	{
		rolls[i] = Counter(to_string(i) + "'s");
	}

	random_device rd;
	mt19937_64 generator(rd());
	uniform_int_distribution distribution(1, SIDES);

	for (int t = 0; t < T; t++)
	{
		int result = distribution(generator);
		rolls[result].Increment();
	}
	for (int i = 1; i <= SIDES; i++)
	{
		cout << rolls[i] << endl;
	}
}
