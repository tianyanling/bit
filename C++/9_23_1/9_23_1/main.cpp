#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5 };
	tdd::vector<int> v2(a,a+4);
	tdd::vector<int> v(v2.begin(),v2.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}