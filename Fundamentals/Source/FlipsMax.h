#pragma once

#include <vector>
#include <string>

#include "Counter.h"

class FlipsMax
{
public:
	static Counter Max(const Counter& x, const Counter& y);
	static void MainTest(const std::vector<std::string>& args);
};

