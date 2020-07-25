#include <fstream>
#include <iostream>
#include <string>

#include "UF.h"

UF::UF(int N)
{
	count = N;
	id.resize(N);
	for (int i = 0; i < N; i++)
	{
		id[i] = i;
	}
}

void UF::makeUnion(int p, int q)
{
	int pID = find(p);
	int qID = find(q);

	if (pID == qID) return;
	for (int i = 0; i < id.size(); i++)
		if (id[i] == pID) id[i] = qID;
	count--;
}

int UF::find(int p)
{
	return id[p];
}

bool UF::connected(int p, int q)
{
	return find(p) == find(q);
}

int UF::getCount()
{
	return count;
}

int UF::MainTest(int argc, char* argv[])
{
	if (argc > 1)
	{
		std::fstream infile;
		infile.open(argv[1]);

		int N;
		infile >> N;
		UF uf(N);

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
