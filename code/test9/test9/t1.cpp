//����ӷ�
//�����κ����������ʵ������֮��
//˼·�������ǽ�λ��ͨ�������Ƶ�����ʵ�ְ�λ�ۼ�
//��λ���⣺�����������������1λ
//
#include<iostream>
using namespace std;

int addAB(int A, int B)
{
	int sum;
	int count;
	
	if (B == 0)//û�н�λ�����
	{
		return A;
	}

	count = (A & B) << 1;//�н�λ
	sum = A ^ B;
	
	return addAB(sum,count);
}

int main1()
{
	int A, B;
	cin >> A >> B;

	cout << addAB(A, B) << endl;
	system("pause");
	return 0;
}