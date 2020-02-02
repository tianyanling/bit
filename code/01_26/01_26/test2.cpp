//���������
//https://leetcode-cn.com/problems/add-binary/
#include<iostream>
#include<string>
using namespace std;

string addBinary(string a, string b) 
{
	string tmp;
	int pre = 0;
	int cur = 0;
	int len_a = a.size();
	int len_b = b.size();

	if (len_a < len_b)
	{
		swap(a, b);
		swap(len_a, len_b);
	}

	if (len_a - len_b > 0)
	{
		b.insert(0, len_a - len_b, '0');
	}

	for (int i = len_a - 1; i >=0; i--)
	{
		int newa = a[i] - '0';
		int newb = b[i] - '0';

		cur = newa ^ newb ^pre;//�����Ƽӷ������Ľ��һ�£������ǽ�λ������£�

		if (newa + newb + pre >= 2)//��Ϊ�н�λ���޽�λ�������
		{
			pre = 1;
		}
		else
		{
			pre = 0;
		}
		tmp.insert(0, 1, cur + '0');
	}

	if (pre)//�ж����λ�Ƿ��н�λ
	{
		tmp.insert(0, 1, pre + '0');
	}
	return tmp;
}

int main()
{
	string a = "11";
	string b = "1";

	cout << addBinary(a, b) << endl;
	system("pause");
	return 0;
}