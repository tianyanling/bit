#include<iostream>
#include<list>
#include"mlist.h"
using namespace std;

int main()
{
	tdd::list<int> l(4, 5);
	tdd::list<int> l2(l.begin(), l.end());

	int arr[5] = { 1,3,5,7,9 };
	tdd::list<int> l3(arr, arr + 5);

	tdd::list<int> l4 = l3;
	for (auto i = l3.begin(); i != l3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	/*for (auto &i : l)
	{
		cout << i << " ";
	}
	cout << endl;
*/
	system("pause");
	return 0;
}