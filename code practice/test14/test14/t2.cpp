//���˵Ĵ���
//���ӣ�https://www.nowcoder.com/questionTerminal/a5190a7c3ec045ce9273beebdfe029ee?source=relative

//һ������������n����ÿ�������涼��һ������(ӵ����ͬ����������������)��
//���һ�����������˵ĵ��ҽ���������ĺ���ĺʹ���������ĺ���Ļ���
//���磺��������������ĺ����� {1, 1, 2, 3}��������Ӿ������˵ģ���Ϊ1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//������ʵ��Ӵ������Ƴ�һЩ��(�����Ƴ�0��, ���Ǳ��Ƴ���)��Ҫʹ�Ƴ���Ĵ��������˵ġ�
//���������̼���һ������Ի�õĶ����ֲ�ͬ�����˵Ĵ��ӡ�
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class node 
{
public:
	int m_idx = 0;
	int m_sum = 0;
	int m_mul = 0;
	node(int i, int s, int m) :
		m_idx(i), 
		m_sum(s), 
		m_mul(m) 
	{

	}
};

int main() 
{
	int n;
	while (cin >> n) 
	{
		vector<int> dai(n);
		for (int i = 0; i<n; cin >> dai[i], ++i);//����ÿ�����ϵĺ���

		sort(dai.begin(), dai.end());

		queue<node> ns;
		ns.push(node(0, dai[0], dai[0]));
		int res = 0;
		while (!ns.empty())
		{
			node sr = ns.front();
			ns.pop();
			for (int i = sr.m_idx + 1; i<n; ++i)
			{
				if (i == sr.m_idx + 1 || dai[i] != dai[i - 1])
				{
					int s = sr.m_sum + dai[i], m = sr.m_mul*dai[i];
					if (s > m)
					{
						res++;
						ns.push(node(i, s, m));
					}
					else 
					{
						break;
					}
				}
			}
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}