#include <iostream>
#include <string>
using namespace std;

#define MAX 60

int main1()
{
	int K1[2][2] = { 0 }, K2[2][2] = { 0 };
	int Temp1[2] = { 0 }, Temp2[2] = { 0 };
	char P[MAX] = { 0 }, C[MAX] = { 0 };
	int T1[MAX] = { 0 }, T2[MAX] = { 0 };
	int len, flag = 0, temp, temp1, i, j, num = 0;


	cout << "======== Hill ���� ========" << endl;;
	cout << "��������Կ��ֵ��" << endl;;
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cin>>K1[i][j];
		}
	}
	cout << endl;
	cout << "===========================" << endl;
	cout << "	1. ����						    "<<endl;
	cout << "	2. ����						   " << endl;
	cout << "===========================" << endl;

	cout << "������Ҫ���������" << endl;
	cin >> num;
	
	switch (num)
	{
	case 1:
		cout << "���������ģ�";
		cin >> P;

		len = strlen(P);

		// ������Ϊ����ʱ����һλ
		if (len % 2 == 1)
		{
			P[len] = 'a';
			len = strlen(P);
			flag = 1;
		}

		// ����дת��Сд������ֵ��T1����
		for (i = 0; i<len; i++)
		{
			if (P[i] >= 'A' && P[i] <= 'Z')
			{
				P[i] = P[i] + 32;
			}

			T1[i] = P[i] - 'a';
		}


		// �õ����ܺ������洢��T2��
		for (i = 0; i<len; i += 2)
		{
			Temp1[0] = T1[i];
			Temp1[1] = T1[i + 1];

			// Temp2�洢����intֵ
			Temp2[0] = (Temp1[0] * K1[0][0] + Temp1[1] * K1[1][0]) % 26;
			Temp2[1] = (Temp1[0] * K1[0][1] + Temp1[1] * K1[1][1]) % 26;

			T2[i] = Temp2[0];
			T2[i + 1] = Temp2[1];
		}

		if (flag == 1)
		{
			len = len - 1;
		}

		cout << "���ܽ��Ϊ��";
		for (i = 0; i<len; i++)
		{
			C[i] = T2[i] + 'a';
			cout << C[i];
		}
		cout << endl;
		break;

	case 2:
		cout << "���������ģ�";
		cin >> C;

		len = strlen(C);

		// ������Ϊ����ʱ����һλ
		if (len % 2 == 1)
		{
			C[len] = 'a';
			len = strlen(C);
			flag = 1;
		}


		for (i = 0; i<len; i++)
		{
			if (C[i] >= 'A' && C[i] <= 'Z')
			{
				C[i] = C[i] + 32;
			}

			T2[i] = C[i] - 'a';
		}

		// ��K����
		temp = -1;
		for (i = 1; temp < 0; i++)
		{
			temp = (K1[0][0] * K1[1][1] - K1[0][1] * K1[1][0]) + 26 * i;
		}

		i = 1;
		while (1)
		{
			if ((temp * i) % 26 == 1)
			{
				temp1 = i;
				break;
			}
			else
			{
				i++;
			}
		}

		K2[0][0] = K1[1][1] * temp1;
		K2[0][1] = (((-1 * K1[0][1]) + 26) * temp1) % 26;
		K2[1][0] = (((-1 * K1[1][0]) + 26) * temp1) % 26;
		K2[1][1] = K1[0][0] * temp1;

		// �õ����ܺ������洢��T2��
		for (i = 0; i<len; i += 2)
		{
			Temp2[0] = T2[i];
			Temp2[1] = T2[i + 1];

			// Temp1�洢����intֵ
			Temp1[0] = (Temp2[0] * K2[0][0] + Temp2[1] * K2[1][0]) % 26;
			Temp1[1] = (Temp2[0] * K2[0][1] + Temp2[1] * K2[1][1]) % 26;

			T1[i] = Temp1[0];
			T1[i + 1] = Temp1[1];
		}

		if (flag == 1)
		{
			len = len - 1;
		}

		cout << "���ܽ��Ϊ��";
		for (i = 0; i<len; i++)
		{
			P[i] = T1[i] + 'a';
			cout << P[i];
		}
		cout << endl;
		break;

	default:
		cout << "error" << endl;
		exit(0);
		break;
	}
	system("pause");
	return 0;
}