//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
#include<iostream>
using namespace std;
#if 0
int Sum_solution(int n)
{
	int a = 1;
	n > 1 && (a = n + Sum_solution(n - 1));//与运算符短路问题
	return a;
}

int main()
{
	cout << Sum_solution(0) << endl;
	system("pause");
	return 0;
}
#else
class test
{
public:
	static int s_m_tmp;
	static int s_m_sum;
	test()
	{
		s_m_tmp++;
		s_m_sum += s_m_tmp;
	}
};

int test::s_m_tmp = 0;
int test::s_m_sum = 0;

int main()
{
	test *t = new test[100];

	cout << test::s_m_sum << endl;

	delete[] t;

	system("pause");
	return 0;
}
#endif

