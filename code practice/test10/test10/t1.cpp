//������
//����һ�������ľ��������̣������һ����Ч�㷨�жϵ�ǰ����Ƿ��ʤ��
//����һ����ά����board������ǰ���̣�����Ԫ��Ϊ1�Ĵ����ǵ�ǰ��ҵ����ӣ�
//Ϊ0��ʾû�����ӣ�Ϊ - 1�����ǶԷ���ҵ����ӡ�

//���1
#include<iostream>
#include<vector>
using namespace std;

bool checkWon1(vector<vector<int> > board)
{
	int sum = 0;
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			sum += board[i][j];
		}
	}

	if (sum > 0)
	{
		return true;
	}
	return false;
}

int main1()
{
	vector<vector<int>> v{ {1,0,1},{1,-1,-1},{1,-1,0} };

	cout << checkWon1(v) << endl;
	system("pause");
	return 0;
}