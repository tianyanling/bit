//�ַ���ת������
//https://leetcode-cn.com/problems/string-to-integer-atoi/
#include<iostream>
#include<string>
using namespace std;

int myAtoi(string str)
{
	int ret = 0;
	int sig = 1;//����
	string tmp;
	if (str.empty())
	{
		return 0;
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')//Ѱ�ҵ�һ���ǿ��ַ�
		{
			ret = i;
		}
		else
		{
			continue;
		}

		if (str[ret] == '+' || str[ret] == '-')//�жϵ�һ���ǿ��ַ��Ƿ�Ϊ������
		{
			if (str[ret] == '-')//��Ϊ���ţ���ı�sig��ֵ
			{
				sig = 0;
			}
			i = ret + 1;
			while (str[i] >= '0' && str[i] <= '9')//��ȡ���ź����������
			{
				tmp.push_back(str[i]);
				i++;
			}
			break;
		}
		else if (str[ret] >= '0' && str[ret] <= '9')//����һ���ǿ��ַ�Ϊ����
		{
			while (str[i] >= '0' && str[i] <= '9')//��ȡ���ź����������
			{
				tmp.push_back(str[i]);
				i++;
			}
			break;
		}
		else
		{
			return 0;
		}
	}
	long long res = 0;
	int j = 0;
	while (j < tmp.size())//���ַ���ת��Ϊ����
	{
		res =res*10 + tmp[j] - '0';
		j++;

		if (res >= 2147483648)//�ж��Ƿ�Խ��
		{
			return sig == 0 ? INT_MIN : INT_MAX;
		}
	}

	return sig == 0 ? -res : res;
}

int main1()
{
	string str = "18446744073709551617";

	cout << myAtoi(str) << endl;
	system("pause");
	return 0;
}

