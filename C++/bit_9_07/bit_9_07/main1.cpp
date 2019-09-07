#include<iostream>
#include<typeinfo>
using namespace std;

#if 0
template <class T>
void swapArgs(T &a, T &b)
{
	T tmp;

	cout << typeid(tmp).name() << endl;//可以输出类型
	tmp = a;
	a = b; 
	b = tmp;
}

void swapArgs(int &a, int &b)//整型专用，交换函数
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
#endif

template <typename T>
int findArgs(T *src, size_t n, T f)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (src[i] == f)
		{
			return i;
		}
	}
	return -1;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}

template <typename T1,typename T2>
T1 add(T1 a, T2 b)
{
	return a + b;
}

int add(int a, int b)
{
	return a + b;
}

int main1()
{
	/*int a = 5, b = 7;
	double c = 3.14, d = 0.618;
	swapArgs(a, b);
	cout << a << " "<<b<< endl;

	swapArgs(c, d);
	cout << c << " " << d << endl;*/

	int arr[] = { 1,2,3,21,6,7,8 };
	cout << findArgs(arr, 7, 2) << endl;

	cout << add(2, 'A') << endl;
	system("pause");
	return 0;
}