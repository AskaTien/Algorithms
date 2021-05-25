#include <sstream>

#include "BinarySearch.h"
#include "Flips.h"
#include "UF.h"
#include "WeightedQuickUnionUF.h"

int main(int argc, char* argv[])
{
	std::string cmd;
	std::string arg;
	std::vector<std::string> args;
	while (std::cin >> cmd)
	{
		std::cin >> arg;
		args.push_back(arg);

		if (cmd == "BinarySearch")
		{
			BinarySearch::MainTest(args);
		}
		else if (cmd == "Flips")
		{
			Flips::MainTest(args);
		}
		else if (cmd == "Exit")
		{
			break;
		}
	}

	return 0;
}