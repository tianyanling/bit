//����
//���ӣ�https://www.nowcoder.com/questionTerminal/365d5722fff640a0b6684391153e58d8?pos=2&orderByHotValue=0&done=0
//��Ŀ�������ڵ����������n����ɫ�����ף����׷������֣�����ÿ����ɫ�����������׸�����һ����ͬ��
//A��������Ҫ���ţ�������Ҫȥ������ѡ���ס����ǻ谵�ĵƹ������޷��ֱ����׵���ɫ��ֻ�ֱܷ�������֡�
//�����������һЩ���ף�Ȼ��ѡ��һ˫��ɫ��ͬ�����������ס����ڵ������ǣ�������Ҫ�ö���ֻ����(���ּ�����)�����ܱ�֤һ����ѡ��һ˫��ɫ��ͬ�����ס�
//������ɫ����n(1��n��13), ͬʱ������������Ϊn������left, right, �ֱ����ÿ����ɫ���������׵�������
//���ݱ�֤���ҵ�����������������26����һ����������һ�ֺϷ�����

//˼·��ѡ��һ�ߵ����������ж��ٸ��ܹ���֤����n����ɫ��
//���� min(leftSum-leftMin+1,rightSum-rightMin+1)�����ȷ���Ժ�
//ֻ��Ҫ����һ�����ѡ��һ�����ܹ���֤������һ����ɫƥ����
//����Ҫע��ĳ����ɫ������Ϊ0�����
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMinimum(int n, vector<int> left, vector<int> right) 
{
	int sum = 0;
	int leftSum = 0, rightSum = 0;
	int leftMin = 26, rightMin = 26;
	for (int i = 0; i<n; i++)
	{
		if (left[i] * right[i] == 0)//�ж�������������ɫ����0�����
		{
			sum += (left[i] + right[i]);
		}
		else 
		{
			leftSum += left[i];
			rightSum += right[i];
			leftMin = min(leftMin, left[i]);
			rightMin = min(rightMin, right[i]);
		}
	}
	int ret = min(leftSum - leftMin + 1, rightSum - rightMin + 1);
	//�ж��������������������ܸ���n����ɫ����������׾�ֻ��Ҫ�����һ������
	return sum + ret + 1;
}

int main()
{
	int n = 4;
	vector<int> left{ 1,2,3,4 };
	vector<int> right{ 4,5,6,7 };
	cout << findMinimum(n, left, right) << endl;
	system("pause");
	return 0;
}