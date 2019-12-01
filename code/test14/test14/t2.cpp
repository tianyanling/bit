//幸运的袋子
//链接：https://www.nowcoder.com/questionTerminal/a5190a7c3ec045ce9273beebdfe029ee?source=relative

//一个袋子里面有n个球，每个球上面都有一个号码(拥有相同号码的球是无区别的)。
//如果一个袋子是幸运的当且仅当所有球的号码的和大于所有球的号码的积。
//例如：如果袋子里面的球的号码是 {1, 1, 2, 3}，这个袋子就是幸运的，因为1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//你可以适当从袋子里移除一些球(可以移除0个, 但是别移除完)，要使移除后的袋子是幸运的。
//现在让你编程计算一下你可以获得的多少种不同的幸运的袋子。
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
		for (int i = 0; i<n; cin >> dai[i], ++i);//输入每个球上的号码

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