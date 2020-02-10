#include<iostream>
using namespace std;

/*2������ָ���ĺ�����������ɺ�����
a����һ���ַ���ת��Ϊ���֣�����ֵ����У��ת���Ƿ�ɹ�
bool strtoi(const char *, int &);
b����һ������ͨ��ָ�����ư�λ����ֱ�Ӹ���ԭ����
void sysReverse(int &, int);*/

//a����һ���ַ���ת��Ϊ���֣�����ֵ����У��ת���Ƿ�ɹ� 
bool strtoi(const char *src, int &res)//const����ָ���е�����
{
	if (!src)
	{
		return false;
	}

	while (*src <= ' ')//�����ɼ��ַ��������ո�
	{
		src++;
	}

	int flag = 1;//Ϊ���ж�����
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
	for (i = 0; src[i] <='9' && src[i] >='0'; i++)//�����ַ���
	{
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}
	res = sum*flag;

	return true;
}

//b����һ������ͨ��ָ�����ư�λ����ֱ�Ӹ���ԭ����
void sysReverse(int &num, int hex)
{
	int i, tmp;
	int sum = 0;
	for (i = num; i; i /= hex)//��λ����
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