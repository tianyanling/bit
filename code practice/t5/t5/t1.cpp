//��̨��
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
//�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
#include<iostream>
using namespace std;

int jumpFloor(int number) 
{
	int sum = 0;
	int pre2 = 1;
	int pre1 = 2;
	if (number <= 2)
	{
		sum = number;
	}
	 
	for (int i = 3; i <= number; i++)
	{
		sum = pre2 + pre1;
		pre2 = pre1;
		pre1 = sum;
	}
	return sum;
}

int main()
{
	int number;

	while (cin >> number)
	{
		cout << jumpFloor(number) << endl;
	}
	system("pause");
	return 0; 
}