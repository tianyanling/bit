//�����г��ֳ���һ�������
//����{1,2,3,2,2,2,5,2,1}   ������Ϊ��2
//��������е�����û�г�������һ��������򷵻�0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MoreThanHalfNum_Solution(vector<int> numbers)
{
	if (numbers.empty())
	{
		return 0;
	}

	// ����ÿ��Ԫ�أ�����¼����������ǰһ��Ԫ����ͬ���������1�����������1
	int result = numbers[0];
	int times = 1; // ����

	for (int i = 1; i<numbers.size(); i++)
	{
		if (times == 0)
		{
			// ����result��ֵΪ��ǰԪ�أ����ô���Ϊ1
			result = numbers[i];
			times = 1;
		}
		else if (numbers[i] == result)
		{
			times++; // ��ͬ���1
		}
		else
		{
			times--; // ��ͬ���1               
		}
	}

	// �ж�result�Ƿ���������������ִ����������鳤�ȵ�һ��
	times = 0;
	for (int i = 0; i<numbers.size(); ++i)
	{
		if (numbers[i] == result)
		{
			times++;
		}
	}

	return (times > numbers.size() / 2) ? result : 0;
}

int main()
{
	vector<int> v = { 1,2,3,2,2,2,5,2,1};

	cout<<MoreThanHalfNum_Solution(v);
	system("pause");
	return 0;
}