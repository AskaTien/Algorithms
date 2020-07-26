#include <fstream>
#include <iostream>
#include <string>

#include "WeightedQuickUnionUF.h"

WeightedQuickUnionUF::WeightedQuickUnionUF(int N)
{
	count = N;
	id.resize(N);
	sz.resize(N);
	for (int i = 0; i < N; i++) { id[i] = i; sz[i] = 1; }
}

void WeightedQuickUnionUF::makeUnion(int p, int q)
{
	int i = find(p);
	int j = find(q);
	if (i == j) return;

	if (sz[i] < sz[j]) { id[i] = j; sz[i] += sz[j]; }
	else			   { id[j] = i; sz[j] += sz[i]; }
	count--;
}

int WeightedQuickUnionUF::find(int p)
{
	while (p != id[p]) p = id[p];
	return p;
}

bool WeightedQuickUnionUF::connected(int p, int q)
{
	return find(p) == find(q);
}

int WeightedQuickUnionUF::getCount()
{
	return count;
}

int WeightedQuickUnionUF::MainTest(int argc, char* argv[])
{
	if (argc > 1)
	{
		std::fstream infile;
		infile.open(argv[1]);

		int N;
		infile >> N;
		WeightedQuickUnionUF uf(N);

		int p, q;
		while (infile >> p >> q)
		{
			if (uf.connected(p, q)) continue;
			uf.makeUnion(p, q);
			std::cout << p << " " << q << std::endl;
		}
		std::cout << uf.getCount() << std::endl;

		infile.close();
	}

	return 0;
}


