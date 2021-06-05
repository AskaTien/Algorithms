#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "In.h"

namespace Algorithms
{
	class BinarySearch
	{
	public:
		static int64_t IndexOf(const std::vector<int>& a, int key)
		{
			size_t lo = 0;
			size_t hi = a.size() - 1;
			while (lo <= hi)
			{
				size_t mid = (lo + hi) / 2;
				if (key < a[mid])    hi = mid - 1;
				else if (key > a[mid]) lo = mid + 1;
				else return static_cast<int64_t>(mid);
			}
			return -1;
		}

		static void MainTest(const std::vector<std::string>& args)
		{
			std::ifstream in(args[0]);
			std::vector<int> allowList(std::istream_iterator<int>{in}, {});
			in.close();

			sort(allowList.begin(), allowList.end());

			int key;
			while (std::cin >> key) if (IndexOf(allowList, key) == -1) std::cout << key << std::endl;
		}
	};
}