#include "BinarySearch.h"
#include "Flips.h"
#include "FlipsMax.h"
#include "Rolls.h"
#include "UF.h"
#include "WeightedQuickUnionUF.h"

int main(int argc, char* argv[])
{
	//Flips::MainTest({ argv + 1, argv + argc });
	FlipsMax::MainTest({ argv + 1, argv + argc });
	//Rolls::MainTest({ argv + 1, argv + argc });

	return 0;
}