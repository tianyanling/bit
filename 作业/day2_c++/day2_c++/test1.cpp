#include<iostream>
using namespace std;

/*1���ֱ�ʹ�����úͺ���ɽ���������ʹ�������������������ͬ  */

void swap1(int *pa, int *pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void swap2(int &pa, int &pb)
{
	int tmp;
	tmp = pa;
	pa = pb;
	pb = tmp;
}

int main1()
{
	int a = 3, b = 4;
	//swap1(&a, &b);
	//cout << "a=" << a<<" " << "b=" << b << endl;
	swap2(a, b);
	cout << "a=" << a << " " << "b=" << b << endl;
	system("pause");
	return 0;
}