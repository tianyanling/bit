//����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
//����������Yes, �������No���������������������������ֶ�������ͬ��
#include<iostream>
#include<vector>
using namespace std;

//���ڶ����������������ǣ��������Ľ��ֵ�ȸ����ֵС���������Ľ��ֵ�ȸ����ֵ��
//����������е����һ�����Ϊ����㣬ǰһ�����Ϊĳһ�������ĸ���㣬��������
bool VerifySquenceOfBST(vector<int> sequence)
{
	int size = sequence.size();
	if (0 == size)
	{
		return false;
	}

	while (size--)
	{
		int i = 0;
		while (sequence[i] < sequence[size])
		{
			i++;
		}

		while (sequence[i] > sequence[size])
		{
			i++;
		}

		if (i < size)
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	
	system("pause");
	return 0;
}