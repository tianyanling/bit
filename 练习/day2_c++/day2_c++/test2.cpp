#include<iostream>
using namespace std;

/*2、按照指定的函数声明，完成函数：
a、将一个字符串转换为数字，返回值用来校验转换是否成功
bool strtoi(const char *, int &);
b、将一个数字通过指定进制按位逆序（直接覆盖原数）
void sysReverse(int &, int);*/

//a、将一个字符串转换为数字，返回值用来校验转换是否成功 
bool strtoi(const char *src, int &res)//const修饰指针中的内容
{
	if (!src)
	{
		return false;
	}

	while (*src <= ' ')//即不可见字符，跳过空格
	{
		src++;
	}

	int flag = 1;//为了判断正负
	if (*src == '-')
	{
		flag = -1;
		src++;
	}

	if (*src > '9' || *src < '0')
	{
		return false;
	}

	int sum = 0;
	int i, tmp;
	for (i = 0; src[i] <='9' && src[i] >='0'; i++)//遍历字符串
	{
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}
	res = sum*flag;

	return true;
}

//b、将一个数字通过指定进制按位逆序（直接覆盖原数）
void sysReverse(int &num, int hex)
{
	int i, tmp;
	int sum = 0;
	for (i = num; i; i /= hex)//数位遍历
	{
		tmp = i%hex;
		sum = sum*hex + tmp;
	}
	num = sum;
}
int main()
{
	int num = 25;
	sysReverse(num, 2);
	cout << num << endl;

	int res;
	if (strtoi("\n\n\n-478    aaaa", res))
	{
		cout << res << endl;
	}
	else
	{
		cout << "fail\n";
	}
	system("pause");
	return 0;
}