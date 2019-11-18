//�����������֮��
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#if 0
//�������
//�ӵ�һ������ʼ����ۼӣ�ÿ���ۼӺ���ǰ��ĺͽ��бȽϣ�����ϴ��ֵ
//�ٴӵڶ���Ԫ�ؿ�ʼ����ۼ�...
//ʱ�临�Ӷ�ΪO(n^2)
int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int i, j;
	int maxsum = -1000000;//��ֹ������֮��Ϊ�������ʶ���һ����С����

	for (i = 0; i < v.size(); i++)
	{
		int cursum = 0;
		for (j = i; j < v.size(); j++)
		{
			cursum += v[j];
			if (cursum > maxsum)
			{
				maxsum = cursum;
			}
		}
	}
	return maxsum;
}
#endif

#if 0
//����˼�루�ȷֺ�ϣ�
//�֣���鲢����ķ�һ�£����ǽ�һ������ֳ������鵥����Ԫ��
//�ϣ���ÿ����Ԫ�ؽ��кϲ����������Ԫ������������Լ�����Ԫ�ص����������
//�ڼ�������Ԫ������ʱ��ȡ�м������߱��� ��ȡ������
//ͬ�����Լ��������Ԫ�ص�����Ӷκ�
int dealGreatSum(const vector<int> &v, int begin, int end)
{
	if (begin == end)
	{
		return v[begin];
	}

	int mid = (begin + end) / 2;
	int leftmax = dealGreatSum(v, begin, mid);
	int rightmax = dealGreatSum(v, mid + 1, end);

	int corssmax = 0;//����Ԫ�ص�����Ӷκ�
	int i;
	int sum = 0;
	int tmpmax = v[mid];

	for (i = mid; i >= begin; i--)
	{
		sum += v[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	corssmax += tmpmax;

	sum = 0;
	tmpmax = v[mid + 1];
	for (i = mid + 1; i < end; i++)
	{
		sum += v[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	corssmax += tmpmax;

	return max(max(leftmax, rightmax), corssmax);
}

int FindGreatestSumOfSubArray(const vector<int> &v)
{
	return dealGreatSum(v, 0, v.size() - 1);
}
#endif

#if 1
//����˼��
//��������������һ�������Ǽ���������һ��Ԫ�ؿ�ʼ��������Ԫ�صĺͣ������ǰ��Ԫ�صĺ�С��0�������´�0��ʼ����
//��һ�������Ǳ���һ��Ԫ�ص�����Ӷκͣ��������һ��Ԫ�صĺʹ���֮ǰһ��Ԫ��֮�ͣ������¿�ʼ����

int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int i;
	int sum = v[0];
	int tmpmax = v[0];
	for (i = 1; i < v.size(); i++)
	{
		if (sum >= 0)
		{
			sum += v[i];
		}
		else
		{
			sum = v[i];
		}

		if (tmpmax < sum)
		{
			tmpmax = sum;
		}
	}
	return tmpmax;
}
#endif

#if 0
//̰���㷨
//������Ϊ�����������飬ֻ���º�Ϊ������������
//ʱ�临�Ӷ�ΪO(n)
int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int ans = -100000;//��ֹ������֮��Ϊ�������ʶ���һ����С����
	int sum = 0;

	for (int i = 0; i<v.size(); i++)
	{
		sum += v[i];
		if (sum > ans)
		{
			ans = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	return ans;
}
#endif

int main()
{
	vector<int> v;
	int t,n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	cout << FindGreatestSumOfSubArray(v) << endl;
	system("pause");
	return 0;
}