#include "BinarySearch.h"

using namespace std;

int64_t BinarySearch::IndexOf(const vector<int>& a, int key)
{
	size_t lo = 0;
	size_t hi = a.size() - 1;
	while (lo <= hi)
	{
		size_t mid = (lo + hi) / 2;
		if   (key < a[mid])    hi = mid - 1;
		else if (key > a[mid]) lo = mid + 1;
		else return static_cast<int64_t>(mid);
	}
	return -1;
}

void BinarySearch::MainTest(const vector<string>& args)
{
	ifstream in(args[0]);
	vector<int> allowList(istream_iterator<int>{in}, {});
	in.close();
	
	sort(allowList.begin(), allowList.end());

	int key;
	while (cin >> key) if (IndexOf(allowList, key) == -1) cout << key << endl;
}

