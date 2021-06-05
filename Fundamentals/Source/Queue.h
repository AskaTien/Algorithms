#pragma once

namespace Algorithms
{
	template<typename Item>
	class Queue
	{
	public:
		Queue();
		void Enqueue(const Item& item);
		Item Dequeue();
		bool IsEmpty();
		size_t Size();
	};
}
