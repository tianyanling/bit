//�������������
//��Ŀ������ �����һ���㷨������������������ļӷ���
//���������String addend��������String augend��������������ֵ���ӷ����

//˼·���Ƚ��϶̵��ַ�����λ����ϳ����ַ���λ�����루��λ��0����
#include<iostream>
#include<string>
using namespace std;

string AddLongInter(string addend, string augend)
{
	int tmp = 0, ret = 0;
	while (addend.size() < augend.size())
	{
		addend = "0" + addend;
	}
	while (addend.size() > augend.size())
	{
		augend = "0" + augend;
	}

	for (int i = addend.size() - 1; i >= 0; i--)
	{
		tmp = addend[i] - '0' + augend[i] - '0' + ret;
		addend[i] = tmp % 10 + '0';
		if (tmp / 10)
		{
			ret = 1;
		}
		else
		{
			ret = 0;
		}
	}
	if (ret)
	{
		addend = "1" + addend;
	}
	return addend;
}

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		cout<<AddLongInter(a, b) << endl;
	}
	system("pause");
	return 0;
}