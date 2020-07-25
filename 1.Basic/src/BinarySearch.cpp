#include <fstream>
#include <iostream>
#include <algorithm>

#include "BinarySearch.h"
int BinarySearch::rank(int key, std::vector<int> a)
{
	int lo = 0;
	int hi = a.size() - 1;
	while (lo <= hi)
	{
		int mid = lo + (hi - lo) / 2;
		if (key < a[mid])hi = mid - 1;
		else if (key > a[mid]) lo = mid + 1;
		else return mid;
	}
	return -1;
}

int BinarySearch::MainTest(int argc, char* argv[])
{

	std::vector<int> whitelist;
	std::ifstream infile;
	if (argc > 1)
	{
		infile.open(argv[1]);
	}
	int in_temp;
	while (infile >> in_temp)
	{
		whitelist.push_back(in_temp);
	}
	std::sort(whitelist.begin(), whitelist.end());
	infile.close();

	if (argc > 2)
	{
		infile.open(argv[2]);
	}
	while (infile >> in_temp)
	{
		if (BinarySearch::rank(in_temp, whitelist) < 0)
			std::cout << in_temp << std::endl;
	}
	infile.close();

	return 0;
}

