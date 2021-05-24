#include "BinarySearch.h"
#include "UF.h"
#include "WeightedQuickUnionUF.h"

int main(int argc, char* argv[])
{
	BinarySearch::MainTest({ argv + 1, argv + argc });
	//return UF::MainTest(argc, argv);
	//return WeightedQuickUnionUF::MainTest(argc, argv);

	return 0;
}