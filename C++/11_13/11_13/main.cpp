#include<iostream>
#include<functional>
#include<set>
using namespace std;

int main0()
{
	int a[5] = { 2,3,5,6,1 };
	multiset<int> ms;
	set<int> s(a, a + 5);

	for (auto &i : s)
	{
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}