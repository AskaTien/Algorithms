#pragma once

namespace Algorithms
{
	template<typename Item>
	class ResizingArrayStack
	{
	public:
		void Push(const Item& item)
		{
			if (N == length) Resize(2 * length)
			*(a + N++) = item;
		}

		Item Pop()
		{
			Item item =	*(a + --N);
			if (N > 0 && N == length / 4) Resize(length / 2);
			return item;
		}

		bool IsEmpty() { return N == 0; }
		size_t Size() { return N; }

	private:
		void Resize(const size_t& max)
		{
			length = max;
			Item* temp = new Item[length];
			for (size_t i = 0; i < N; i++)
				*(temp + i) = *(a + i);
			if (a != nullptr)
			{
				delete a;
				a = nullptr;
			}
			a = temp;
		}

		Item* a = nullptr;
		size_t N = 0;
		size_t length = 1;
	};
}