#include <iostream>
#include <vector>
using namespace std;

int Find(vector<int> tmp, int start, int end,int A,int B,int C)
{
	int money = 0;
	for (int i = 0; i < tmp.size(); i++)
	{
		if ((tmp[i] + 1)== end || (tmp[i] -1) == end)
		{
			if ((tmp[i] + 1) == end)
			{
				money += C;
			}
			else
			{
				money += B;
			}
			money += A;
			Find(tmp, start, i,A,B,C);
			if (start == i)
			{
				break;
			}
		}
		else
		{
			start++;
			money += A;
		}
	}
	return money;
}
int main()
{
	int N, A, B, C;
	while (cin >> N >> A >> B >> C)
	{
		int num;
		vector<int> tmp;
		for (int i = 0; i < N; i++)
		{
			cin >> num;
			tmp.push_back(num);
		}
		cout << Find(tmp,1,N, A, B, C);
	}
	system("pause");
	return 0;
}