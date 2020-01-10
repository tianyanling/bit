#include <iostream>
#include "hashTable.h"
#include <unordered_map>
using namespace std;

int repeatedNTimes(vector<int>& A)
{
	unordered_map<int, int> um;
	int n = A.size() / 2;

	for (auto & e : A)
	{
		um[e]++;
	}

	for (auto & e : um)
	{
		if (e.second == n)
		{
			return e.first;
		}
	}
	return -1;
}

int test()
{
	vector<int> v{ 1, 3, 4, 2, 3, 3 };

	cout << repeatedNTimes(v);

	return 0;
}

int main()
{
	tdd::hashTable<int, int> ht;

	ht.insert(pair<int, int>(1, 5));
	ht.insert(pair<int, int>(2, 7));
	ht.insert(pair<int, int>(5, 6));
	ht.insert(pair<int, int>(6, 8));
	ht.insert(pair<int, int>(12, 9));
	ht.insert(pair<int, int>(16, 4));
	ht.insert(pair<int, int>(23, 11));
	ht.insert(pair<int, int>(27, 13));

	ht.insert(pair<int, int>(33, 13));
	ht.insert(pair<int, int>(36, 13));
	return 0;
}