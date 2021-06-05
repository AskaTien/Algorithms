#pragma once

#include <vector>
#include <string>
#include <random>
#include <iostream>

#include "Counter.h"

class FlipsMax
{
public:
	static Counter Max(const Counter& x, const Counter& y)
	{
		return x.Tally() > y.Tally() ? x : y;
	}

	static void MainTest(const std::vector<std::string>& args)
	{
		int T = stoi(args[0]);
		Counter heads("heads");
		Counter tails("tails");
		std::random_device rd;
		std::mt19937_64 generator(rd());
		std::bernoulli_distribution distribution(0.5);
		for (int i = 0; i < T; i++)
		{
			if ((distribution(generator))) heads.Increment();
			else tails.Increment();
		}

		if (heads.Tally() == tails.Tally())
		{
			std::cout << "Tie" << std::endl;
		}
		else
		{
			std::cout << Max(heads, tails) << " wins" << std::endl;
		}
	}
};

