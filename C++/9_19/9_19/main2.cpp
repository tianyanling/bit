#include<iostream>
#include<typeinfo>
using namespace std;

template <class T>//定义模板,(定义模板和函数声明其实在一行，所以没有分号，为了阅读方便，分为两行写)
void swapArgs(T &a, T &b)//函数声明,
{
	T tmp;

	cout << typeid (tmp).name() << endl;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
int findArges(T *src, size_t n, T f)//保证T *src与T f 类型一致
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

template <typename T2>
int add(T2 a, T2 b)
{
	return a + b;
}

int main2()
{
	cout << add<int>(2, 3) << endl;//尖括号中的类型表示是模板的类型，直接调用模板，如果没有尖括号中的类型，优先调用非模板（模板的优先级很低）

	/*int ia = 3, ib = 7;
	double da = 3.14, db = 5.12;
	swapArgs(ia, ib);
	cout << ia <<' '<< ib << endl;

	swapArgs(da, db);
	cout << da<<' '<<db << endl;
	
	int arr[] = { 1,2,3,4,5,6,7 };
	cout << findArges(arr, 7, 5) << endl;
	*/
	system("pause");
	return 0;
}