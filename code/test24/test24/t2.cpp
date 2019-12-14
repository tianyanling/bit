//�Թ�����
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> maze;
vector<vector<int>> now_path;
vector<vector<int>> best_path;
int M, N;

void Maze(int m, int n)
{
	maze[m][n] = 1;//��ʾ��ǰ�ڵ����ߣ���������
	now_path.push_back({ m, n });//����ǰ�ڵ���뵽·����

	if (m == M - 1 && n == N - 1) //�ж��Ƿ񵽴��յ�
	{
		if (best_path.empty() || now_path.size() < best_path.size())
		{
			best_path = now_path;
		}
	}

	if (m - 1 >= 0 && maze[m - 1][n] == 0)//̽���������Ƿ����
	{
		Maze(m - 1, n);
	}
	if (m + 1 < M && maze[m + 1][n] == 0)//̽���������Ƿ����
	{
		Maze(m + 1, n);
	}
	if (n - 1 >= 0 && maze[m][n - 1] == 0)//̽���������Ƿ����
	{
		Maze(m, n - 1);
	}
	if (n + 1 < N && maze[m][n + 1] == 0)//̽���������Ƿ����
	{
		Maze(m, n + 1);
	}
	maze[m][n] = 0;         //�ָ��ֳ�����Ϊδ��
	now_path.pop_back();
}

int main()
{
	while (cin >> M >> N)
	{
		now_path.clear();
		best_path.clear();

		maze = vector<vector<int>> (M, vector<int>(N,0));

		for (auto &i : maze)
		{
			for (auto &j : i) 
			{
				cin >> j;
			}
		}

		Maze(0, 0);
		for (auto i : best_path)
		{
			cout << "(" << i[0] << "," << i[1] << ")" << endl;
		}
	}
	system("pause");
	return 0;
}
