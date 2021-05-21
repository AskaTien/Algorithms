#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

class BinarySearch
{
public:
	static int64_t IndexOf(int key, std::vector<int> a);
	static void MainTest(std::vector<std::string> args);
};

