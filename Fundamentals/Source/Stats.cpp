#include "Stats.h"

#include <iostream>
#include <iomanip>
using namespace std;

void Stats::MainTest(const std::vector<std::string>& args)
{
	Bag<double> numbers;

	//double number;
	//while (cin >> number)
	//	numbers.Add(number);
	numbers.Add(100);
	numbers.Add(99);
	numbers.Add(101);
	numbers.Add(120);
	numbers.Add(98);
	numbers.Add(107);
	numbers.Add(109);
	numbers.Add(81);
	numbers.Add(101);
	numbers.Add(90);

	size_t N = numbers.Size();

	double sum = 0.0;
	for (double x : numbers) sum += x;
	double mean = sum / N;

	sum = 0.0;
	for (double x : numbers) sum += (x - mean) * (x - mean);
	double std = sqrt(sum / (N - 1));

	cout << "Mean: " << mean << endl;
	cout << "Std dev: " << std << endl;
}
