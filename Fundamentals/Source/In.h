#pragma once

#include <vector>
#include <string>
#include <fstream>

#include "Queue.h"

namespace Algorithms
{
	class In
	{
	public:
		In(std::string name) : fileName(name)
		{
			in.open(fileName);
		}

		~In()
		{
			in.close();
		}

		int ReadInt()
		{
			int i;
			in >> i;
			return i;
		}	

		bool IsEmpty()
		{
			return in.peek() == std::ifstream::traits_type::eof();
		}

		static std::vector<int> ReadInts(std::string name)
		{
			In in(name);
			Queue<int> q;
			while (!in.IsEmpty()) q.Enqueue(in.ReadInt());
			
			size_t N = q.Size();
			std::vector<int> a(N);
			for (int i =0; i< N;i++) a[i] = q.Dequeue();

			return a;
		}

	private:
		std::string fileName;
		std::ifstream in;
	};
}