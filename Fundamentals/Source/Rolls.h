#pragma once

#include <vector>
#include <string>
#include <random>

#include "Counter.h"

class Rolls
{
public:
	static void MainTest(const std::vector<std::string>& args)
	{
		int T = stoi(args[0]);
		int SIDES = 6;
		Counter rolls[6 + 1];
		for (int i = 1; i <= SIDES; i++)
		{
			rolls[i] = Counter(std::to_string(i) + "'s");
		}

		std::random_device rd;
		std::mt19937_64 generator(rd());
		std::uniform_int_distribution distribution(1, SIDES);

		for (int t = 0; t < T; t++)
		{
			int result = distribution(generator);
			rolls[result].Increment();
		}
		for (int i = 1; i <= SIDES; i++)
		{
			std::cout << rolls[i] << std::endl;
		}
	}
};

