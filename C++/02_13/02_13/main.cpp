#include "unordered_map.h"
#include <iostream>
using namespace std;

int main()
{
	tdd::unordered_map<int, int> hb;

	hb[2] = 7;
	hb[4] = 6;
	hb[11] = 14;
	hb[7] = 9;
	hb[5] = 1;

	for (auto & e : hb)
	{
		cout << e.first << ' ' << e.second << endl;
	}

	return 0;
}