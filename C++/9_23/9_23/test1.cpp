//�����д�������һ�������
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//�㷨˼��
//�ӿ�ʼ��������i��Ԫ�����i-1��Ԫ�ؽ��бȽϣ�������count++;��������num=v[i]
//���������num��ֵ���������г��ִ����������֣������count()�����жϸ����Ƿ񳬹�����һ��
//ʱ�临�Ӷ�O(n)
int findMaxTimeNum(const vector<int> &v)
{
	int icount = 1;
	int num = v[0];
	int i;
	for (i = 1; i < v.size(); i++)
	{
		if (v[i] == v[i - 1])
		{
			icount++;
		}
		else
		{
			if (icount <= 1)
			{
				num = v[i];
			}
			else
			{
				icount--;
			}
		}
	}
	if (count(v.begin(), v.end(), num) > (v.size() / 2))//STL�ṩ�ĺ����������ǲ���ÿ��Ԫ�س��ֵĴ���
	{
		return num;
	}
	return 0;
}

int main1()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);

	cout << findMaxTimeNum(v) << endl;
	system("pause");
	return 0;
}