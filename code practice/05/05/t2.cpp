//2����ӡ�������
#include<iostream>
#include<vector>
using namespace std;

#if 0
//��һά�����ӡ�������
void printArray(vector<int> &v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void generate(int n)
{
	vector<int> v(n, 0);//vector�ĳ�ʼ����ֱ������
	v[0] = 1;
	printArray(v, 1);
	int i, j;

	for (i = 1; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			v[j] += v[j - 1];
		}
		printArray(v, i + 1);
	}
}

//�ö�ά�����ӡ�������
#elif 1
vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> data(numRows);

	if (numRows == 0)
	{
		return data;
	}
	int i, j;
	data[0].push_back(1);//��һ��Ԫ�غ�Ϊ1

	for (i = 1; i < numRows; i++)
	{
		data[i] = data[i - 1];
		for (j = i - 1; j > 0; j--)
		{
			data[i][j] += data[i][j - 1];
		}
		data[i].push_back(1);//���һ��Ԫ�غ�Ϊ1
	}
	return data;
}
#endif

int main2()
{
	vector<vector<int>> data = generate(0);

	for (auto & i : data)
	{
		for (auto &j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}