#pragma once

#include <vector>
#include <string>
#include <iostream>

#include "Stack.h"

namespace Algorithms
{
	class Reverse
	{
	public:
		static void MainTest(const std::vector<std::string>& args)
		{
			Stack<int> stack;
			int n;
			while (std::cin >> n) stack.Push(n);

			for (int i : stack) std::cout << i << std::endl;
		}
	};
}