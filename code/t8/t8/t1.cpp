//��������˳��ʹ����λ��ż��ǰ��
//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
#include<iostream>
#include<vector>
using namespace std;

void reOrderArray(vector<int> &array)
{
	vector<int> ret;
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 != 0)
		{
			ret.push_back(array[i]);
		}
	}

	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 == 0)
		{
			ret.push_back(array[i]);
		}
	}

	for (auto & e : ret)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> array = { 1,2,3,4,5,6,7,3,4,5,3,5,6,24,4 };

	reOrderArray(array);
	system("pause");
	return 0;
}