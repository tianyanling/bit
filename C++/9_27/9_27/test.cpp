//list的构造函数
#include<iostream>
#include<cstdlib>
#include<list>
using namespace std;

int main()
{
	std::list<int> l1();//空list
	std::list<int> l2(10, 6);//构造3个6
	std::list<int> l3(l2.begin(), l2.end());//用l2的范围构造l3
	std::list<int> l4(l3);//用l3拷贝构造l4

	int arr[] = { 1, 3, 5, 7, 9 };
	std::list<int> l5(arr, arr + sizeof(arr) / sizeof(int));

	
	for (std::list<int>::iterator it = l5.begin(); it != l5.end(); it++)
	{
		cout << l1;
	}
	system("pause");
	return 0;
}