#pragma once

#include "Bag.h"

namespace Algorithms
{
	template<typename Item>
	class Stack
	{
	public:
		Stack();
		void Push(const Item& item);
		Item Pop();
		bool IsEmpty();
		size_t Size();

		iterator begin();
		iterator end();
	};
}
