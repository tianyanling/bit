//��̬��̨��

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
//�����������һ��n����̨���ܹ��ж�����������

//˼·���ҳ�����Ϊ����̨�׷�������Ϊ2^(n-1)
#include<iostream>
using namespace std;

int jumpFloorII(int number) 
{
	return pow(2, number);//���ɣ�count = 2^(n-1)
}

int main1()
{
	int n;

	while (cin >> n)
	{
		cout << jumpFloorII(n) << endl;
	}
	system("pause");
	return 0;
}