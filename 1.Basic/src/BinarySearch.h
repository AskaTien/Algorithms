#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

class BinarySearch
{
private:
	BinarySearch() = delete;
	BinarySearch(const BinarySearch&) = delete;
	BinarySearch operator=(const BinarySearch&) = delete;
	~BinarySearch() = delete;

public:
	static int64_t IndexOf(std::vector<int> a, int key);
	static void MainTest(std::vector<std::string> args);
};