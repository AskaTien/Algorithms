#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

#include "Bag.h"

namespace Algorithms
{
	class Stats
	{
	public:
		static void MainTest(const std::vector<std::string>& args)
		{
			Bag<double> numbers;

			double number;
			while (std::cin >> number)
			{
				numbers.Add(number);
			}

			size_t N = numbers.Size();

			double sum = 0.0;
			for (double x : numbers) sum += x;
			double mean = sum / N;

			sum = 0.0;
			for (double x : numbers) sum += (x - mean) * (x - mean);
			double std = sqrt(sum / (N - 1));

			std::cout.setf(std::ios::fixed);
			std::cout << "Mean: " << std::setprecision(2) << mean << std::endl;
			std::cout << "Std dev: " << std::setprecision(2) << std << std::endl;
		}
	};
}
