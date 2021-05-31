#pragma once

#include <vector>

class WeightedQuickUnionUF
{
public:
	WeightedQuickUnionUF(int N);
	void makeUnion(int p, int q);
	int find(int p);
	bool connected(int p, int q);
	int getCount();

	static int MainTest(int argc, char* argv[]);

private:
	std::vector<int> id;
	std::vector<int> sz;
	int count;
};

