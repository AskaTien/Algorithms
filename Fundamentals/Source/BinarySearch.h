#pragma once

#include <vector>
#include <string>

class BinarySearch
{
public:
	static int64_t IndexOf(const std::vector<int>& a, int key);
	static void MainTest(const std::vector<std::string>& args);
};