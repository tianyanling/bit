//��С������
//˼·��������A��B����С��������һ���ܹ�ͬʱ��������������������ͬʱΪ0����Ϊ������������С������
#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int i = 0;
	cin >> A >> B;

	if (A < 0 || B < 0)
	{
		cout << "������������" << endl;
		cin >> A >> B;
	}

	if (A >= B)
	{
		for (i = A; i < A*B; i++)
		{
			if (i%A == 0 && i %B == 0)
			{
				break;
			}
		}
	}
	else
	{
		for (i = B; i < A*B; i++)
		{
			if (i%A == 0 && i %B == 0)
			{
				break;
			}
		}
	}

	int ret = i;

	cout << ret << endl;
	system("pause");
	return 0;
}