#include<iostream>
#include<typeinfo>
using namespace std;

template <class T>//����ģ��,(����ģ��ͺ���������ʵ��һ�У�����û�зֺţ�Ϊ���Ķ����㣬��Ϊ����д)
void swapArgs(T &a, T &b)//��������,
{
	T tmp;

	cout << typeid (tmp).name() << endl;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
int findArges(T *src, size_t n, T f)//��֤T *src��T f ����һ��
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
	cout << add<int>(2, 3) << endl;//�������е����ͱ�ʾ��ģ������ͣ�ֱ�ӵ���ģ�壬���û�м������е����ͣ����ȵ��÷�ģ�壨ģ������ȼ��ܵͣ�

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