#include "BinarySearch.h"

int64_t BinarySearch::IndexOf(int key, std::vector<int> a)
{
	size_t lo = 0;
	size_t hi = a.size() - 1;
	while (lo <= hi)
	{
		size_t mid = (lo + hi) / 2;
		if   (key < a[mid])    hi = mid - 1;
		else if (key > a[mid]) lo = mid + 1;
		else return static_cast<int64_t>(mid);
	}
	return -1;
}

void BinarySearch::MainTest(std::vector<std::string> args)
{
	std::vector<int> whiteList;
	std::ifstream textFile(args[0]);
	
	int n;
	while (textFile >> n) whiteList.push_back(n);
	std::sort(whiteList.begin(), whiteList.end());
	textFile.close();

	while (std::cin >> n) if (IndexOf(n, whiteList) < 0) std::cout << n << std::endl;
}

