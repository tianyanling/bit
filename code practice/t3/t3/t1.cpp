//��Ŀ����
//��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
#include<iostream>
#include<vector>
using namespace std;

bool Find(int target, vector<vector<int>> array) 
{
	int m = array.size();
	int n = array[0].size();

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (array[i][j] == target)
			{
				return true;
				break;
			}
		}
	}
	return false;
}

int main()
{
	vector<vector<int>> array { {1, 2, 8, 9} ,{2, 4, 9, 12}, { 4, 7, 10, 13}, { 6, 8, 11, 15 }};
	int target;

	while (cin >> target)
	{
		cout << Find(target, array) << endl;
	}
	system("pause");
	return 0;
}