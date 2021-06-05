#pragma once

#include <vector>
#include <string>
#include <random>
#include <iostream>

#include "Counter.h"
namespace Algorithms 
{
	class Flips
	{
	public:
		static void MainTest(const std::vector<std::string>& args)
		{
			int T = std::stoi(args[0]);
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
			std::cout << heads << std::endl;
			std::cout << tails << std::endl;
			int d = heads.Tally() - tails.Tally();
			std::cout << "delta: " << abs(d) << std::endl;
		}
	};
}
