#pragma once

#include <vector>
#include <string>

#include "Stack.h"

namespace Algorithms
{
	class Evaluate
	{
	public:
		static void MainTest(const std::vector<std::string>& args)
		{
			Stack<std::string> ops;
			Stack<double> vals;
			std::string s;
			while (std::cin >> s)
			{
				if (s == "(");
				else if (s == "+")    ops.Push(s);
				else if (s == "-")	  ops.Push(s);
				else if (s == "*")    ops.Push(s);
				else if (s == "/")	  ops.Push(s);
				else if (s == "sqrt") ops.Push(s);
				else if (s == ")")
				{
					std::string op = ops.Pop();
					double v = vals.Pop();
					if      (op == "+")    v = vals.Pop() + v;
					else if (op == "-")    v = vals.Pop() - v;
					else if (op == "*")	   v = vals.Pop() * v;
					else if (op == "/")    v = vals.Pop() / v;
					else if (op == "sqrt") v = sqrt(v);
					vals.Push(v);
				}
				else vals.Push(std::stod(s));
			}
			std::cout << vals.Pop() << std::endl;
		}
	};
}