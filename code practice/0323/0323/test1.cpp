#include <iostream>
#include <vector>
using namespace std;

vector<int> printMatrix(vector<vector<int> > matrix)
{
	int row = matrix.size();
	int col = matrix[0].size();
	vector<int> res;

	if (row <= 0 || col <= 0)
	{
		return res;
	}

	int left = 0, right = col - 1, head = 0, tail = row - 1;
	while (left <= right && head <= tail)
	{
		//�����Ҵ�ӡ
		for (int i = left; i <= right; i++)
		{
			res.push_back(matrix[left][i]);
		}
		//���ϵ��´�ӡ
		for (int i = left + 1; i <= tail; i++)
		{
			res.push_back(matrix[i][right]);
		}
		//���ҵ����ӡ
		if(head != tail)
		for (int i = right - 1; i >= left; i--)
		{
			res.push_back(matrix[tail][i]);
		}
		//���µ��ϴ�ӡ
		if(left != right)
		for (int i = tail - 1; i > head; i--)
		{
			res.push_back(matrix[i][left]);
		}
		left++;
		right--;
		head++;
		tail--;
	}
	return res;
}

int main()
{
	vector<vector<int>> matrix = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

	vector<int> ret = printMatrix(matrix);

	for (auto &e : ret)
	{
		cout << e << " ";
	}
	cout << endl;

	std::system("pause");
	return 0;
}