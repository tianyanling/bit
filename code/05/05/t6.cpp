//�����г������ִ����������鳤��һ�������
//https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&&tqId=11181&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
#include<iostream>
#include<vector>
using namespace std;

//˼·���Ե�һ������Ϊ�����ı�־����������������һ�����������������ȣ����������1��
//��������ȵ�����������ͬ������ʱ����־������Ϊ��ǰ���֣������� ��1��ֱ����������Ϊ1
//��û�����������֣���־������Ϊ��ǰ���֣�������ʼ����λΪ1,���仯�����ּ�Ϊ���ִ�����������
//�������������鳤�ȵ�һ����бȽϣ��жϸ������Ƿ񳬹����鳤�ȵ�һ��
int MoreThanHalfNum_Solution(const vector<int>& v) 
{
	int icount = 1;
	int num = v[0];

	for (int i = 1; i < v.size(); i++)
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

	if (v.size()/2 < count(v.begin(), v.end(), num))//count()������STL�ṩ��һ����������һ����������ʼ��Χ��
	//�ڶ��������ǽ�����Χ�������������ǲ��ҵ�Ԫ�أ����ظ�Ԫ�س��ֵĴ���
	{
		return num;
	}
	return 0;
}

int main6()
{
	vector<int> v;
	int nums[9] = { 1,2,3,2,2,2,5,4,2 };
	v.insert(v.begin(), nums, nums + 9);

	cout << MoreThanHalfNum_Solution(v) << endl;
	system("pause");
	return 0;
}