//���дһ�����������������Ӻ�����������n x m�����̸��ӣ�nΪ����ĸ�������mΪ����ĸ����������Ÿ��Ա�Ե�ߴ����Ͻ��ߵ����½ǣ��ܹ��ж������߷���
//Ҫ�����߻�ͷ·������ֻ�����Һ������ߣ���������������ߡ�
//˼·����̬�滮����
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));

		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				if (i == 0 && j == 0)//��һ������
				{
					v[i][j] = 1;
					continue;
				}

				if (i == 0)//�ϱ߽�
				{
					v[i][j] = v[i][j - 1];
				}
				else if (j == 0)//��߽�
				{
					v[i][j] = v[i - 1][j];
				}
				else//��������
				{
					v[i][j] = v[i - 1][j] + v[i][j - 1];
				}
			}
		}
		cout << v[n][m] << endl;
	}

	system("pause");
	return 0;
}