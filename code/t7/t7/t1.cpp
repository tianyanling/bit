//������ֻ����һ�ε�����
//һ�����������������������֮�⣬���������ֶ�����������
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