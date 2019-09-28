//删除排序数组中的重复项
#include<iostream>
#include<vector>
using namespace std;

int deleteSameNum(vector<int> &v)
{
	int number = 0;
	if (v.size()==0)
	{
		cout << "数组为空" << endl;
	}

	for(int i=0; i<v.size();i++)
	{
		if (v[i] != v[number])
		{
			number++;
			v[number] = v[i];
		}
	}
	return number+1;
}

int main()
{
	vector<int> v;
	int n;
	cout << "输入顺序数组，以q结尾" << endl;
	while (cin>>n)
	{
		v.push_back(n);
	}
	int number = deleteSameNum(v);
	for (int i = 0; i < number; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}