//�ַ���ת��Ϊ����
//Ҫ��������������Լ����ŵ�����
//���������ַ���Ϊ+127382�������127382
//�����ַ���122de232,�����0
#include<iostream>
#include<string>
using namespace std;

int StrToInt(string str)
{
	int tmp = 1;
	if (str.empty())
	{
		return 0;
	}
	
	if (str[0] == '-') //������
	{
		tmp = -1;
		str[0] = '0'; //�������ַ�'0',����0
	}
	else if (str[0] == '+') //��������
	{
		tmp = 1;
		str[0] = '0';
	}

	int sum = 0;
	for (int i = 0; i<str.size(); ++i)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			sum = 0;
			break;
		}
		sum = sum * 10 + str[i] - '0';//�����ַ���Ϊ123����һ��ѭ��sum=1;�ڶ���ѭ��sum=12,������ѭ��sum=123
	}
	return tmp * sum;
}

int main()
{
	string s;
	cout << "������һ���ַ���" << endl;
	getline(cin, s);
	cout << StrToInt(s) << endl;
	system("pause");
	return 0;
}