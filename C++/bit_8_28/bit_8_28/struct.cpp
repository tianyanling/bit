#include<iostream>
using namespace std;

//�ṹ��A1���ֽ�Ϊ16�������Ԫ�ض��룩
struct A1
{
	int a;
	double b;
};

//�ṹ��A2���ֽ�Ϊ24
struct A2
{
	int b;
	A1 a;
};

struct A3
{//��Ա����
	int a;
	double b;
	char c;

	//������ռ�ṹ��Ŀռ䣬��ʱstruct��һ�����������Ŀռ�Ϊ��Ա������ռ�Ŀռ�
	void printA()//��Ա����
	{//�ڳ�Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
		printf("%d\n", a);
	}

	void printB();
};

void A3::printB()
{
	printf("%f\n", b);
}

/*namespace n1
{
	int a;
	int printA()
	{
		printf("%d\n", a);//����ʹ�ýṹ����ĳ�Ա����
	}
}
*/

//�սṹ�屣��һ���ֽ�
struct A4
{

};

int main()
{
	printf("%d,%d,%d.%d\n", sizeof(A1), sizeof(A2), sizeof(A3),sizeof(A4));//16,24,24

	A3 test;
	test.a = 5;
	test.printA();
	test.b = 3.14;
	test.printB();
	//printf("%p,%p,%p\n",)
	system("pause");
	return 0;
}