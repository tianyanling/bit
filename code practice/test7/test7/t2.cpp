//�Ϸ����������ж�
//����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���
//����������"(()())", 6      ���أ�true
//����������"()a()()", 7     ���أ�false
//����������"()(()()", 7      ���أ�false
#include<iostream>
#include<string>
using namespace std;

bool chkParenthesis(string A, int n) 
{
	int count = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '(')
		{
			count++;
		}
		else if (A[i] == ')')
		{
			if (count > 0)
			{
				count--;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s;

	cout << chkParenthesis("()a()()", 7) << endl;
	system("pause");
	return 0;
}