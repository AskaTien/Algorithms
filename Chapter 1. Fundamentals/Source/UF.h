#pragma once

#include <vector>

class UF
{
public:
	UF(int N);
	void makeUnion(int p, int q);
	int find(int p);
	bool connected(int p, int q);
	int getCount();

	static int MainTest(int argc, char* argv[]);

private:
	std::vector<int> id;
	int count;
};

