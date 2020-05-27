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
	//cout << a << endl;//编译出错，无法识别a

	//namespace的三种使用方法
	//1、使用命名空间名称 + 作用域限定符
	cout << tdd::a << endl;
	cout << endl;

	//2、使用using将命名空间中的成员引入
	using tdd::a;
	using tdd::b;
	using tdd::add;
	using tdd::sub;
	cout << tdd::a << endl;
	cout << b << endl;
	cout << add(a, b) << endl;
	cout << sub(a, b) << endl;
	cout << endl;

	//3、使用using namespace + 命名空间名称 引入
	using namespace tdd;
	cout << a << endl;
	cout << b << endl;
	cout << add(a, b) << endl;
	cout << sub(a, b) << endl;
	system("pause");
	return 0;
}