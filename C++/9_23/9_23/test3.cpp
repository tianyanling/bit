//ɾ�����������е��ظ���
#include<iostream>
#include<vector>
using namespace std;

int deleteSameNum(vector<int> &v)
{
	int number = 0;
	if (v.size()==0)
	{
		cout << "����Ϊ��" << endl;
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
	cout << "����˳�����飬��q��β" << endl;
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