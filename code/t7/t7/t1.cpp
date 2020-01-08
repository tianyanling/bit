//数组中只出现一次的数字
//一个整型数组里除了两个数字之外，其他的数字都出现了两次
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void FindNumsAppearOnce(vector<int> data)
{
	map<int, int> mp;
	vector<int> v;
	for (int i = 0; i < data.size(); i++)
	{
		mp[data[i]]++;
	}

	for (int i = 0; i < data.size(); i++)
	{
		if (mp[data[i]] == 1)
		{
			cout << data[i]<<" ";
		}
	}
	cout << endl;
}


int main()  
{
	vector<int> data = { 2,4,3,6,3,2,5,5 };
	FindNumsAppearOnce(data);
	system("pause");
	return 0;
}