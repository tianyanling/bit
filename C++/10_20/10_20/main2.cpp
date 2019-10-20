#include<iostream>
using namespace std;

template<typename T>
void swapArgs(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

void swapArgs(int & a, int & b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

template<>
void swapArgs<int>(int & a, int & b)//����ģ����ػ�
{
	a = a^b;
	b = a^b;
	a = a^b;
}

int main2()
{
	int a = 10;
	int b = 20;
	swapArgs(a, b);

	cout << "a = "<<a << "," << "b = "<<b << " " << endl;
	system("pause");
	return 0;
}