//�������һ��ż����ӽ�����������
//��Ŀ����������һ��ż��������2����������2��������ɣ�
//���ż����2�������кܶ������������ĿҪ��������ָ��ż��������������ֵ��С��������

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int primeNum(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main2()
{
	int a = 0, b = 0;
	int num;

	vector<int> v;

	while (cin >> num)
	{
		if (num % 2 != 0)//ȷ�����������Ϊż��
		{
			return false;
		}

		if (num < 2)
		{
			return 1;
		}
		else
		{
			//���������м���
			for (int i = 0; i <= num / 2; i++)
			{
				if (primeNum(i) && primeNum(num - i))//�ж���������Ϊ��������һֱ���ֵ��С�ķ��򿿽���������һ����ֵ
				{
					a = i;
					b = num - i;
				}
			}
		}
		cout << a << endl;
		cout << b << endl;
	}

	system("pause");
	return 0;
}