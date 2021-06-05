#include "BinarySearch.h"
#include "Flips.h"
#include "FlipsMax.h"
#include "Rolls.h"
#include "Stats.h"
#include "UF.h"
#include "WeightedQuickUnionUF.h"

int main(int argc, char* argv[])
{
	Algorithms::BinarySearch::MainTest({ argv + 1, argv + argc });
	//Algorithms::Flips::MainTest({ argv + 1, argv + argc });
	//Algorithms::FlipsMax::MainTest({ argv + 1, argv + argc });
	//Algorithms::Rolls::MainTest({ argv + 1, argv + argc });
	//Algorithms::Stats::MainTest({ argv + 1, argv + argc });

	return 0;
}