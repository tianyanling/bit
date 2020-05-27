#include <iostream>
using namespace std;

namespace tdd 
{
	int a = 30;
	int b = 10;

	int add(int left, int right)
	{
		return (left + right);
	}

	int sub(int left, int right)
	{
		return (left - right);
	}
}

int main1()
{
	//cout << a << endl;//��������޷�ʶ��a

	//namespace������ʹ�÷���
	//1��ʹ�������ռ����� + �������޶���
	cout << tdd::a << endl;
	cout << endl;

	//2��ʹ��using�������ռ��еĳ�Ա����
	using tdd::a;
	using tdd::b;
	using tdd::add;
	using tdd::sub;
	cout << tdd::a << endl;
	cout << b << endl;
	cout << add(a, b) << endl;
	cout << sub(a, b) << endl;
	cout << endl;

	//3��ʹ��using namespace + �����ռ����� ����
	using namespace tdd;
	cout << a << endl;
	cout << b << endl;
	cout << add(a, b) << endl;
	cout << sub(a, b) << endl;
	system("pause");
	return 0;
}