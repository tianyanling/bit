//����������
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> tmp;
		int num;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			tmp.push_back(num);
		}

		int count = 0;
		int i = 0;
		while (i < n)
		{
			if (tmp[i] < tmp[i + 1])//�ǵݼ�����
			{
				while (i < n && tmp[i] <= tmp[i + 1])
				{
					i++;
				}
				count++;
				i++;
			}
			else if (tmp[i] > tmp[i + 1])//�ǵ�������
			{
				while (i < n && tmp[i] >= tmp[i + 1])
				{
					i++;
				}
				count++;
				i++;
			}
			else//tmp[i] == tmp[i+1]
			{
				i++;
			}
		}
		cout << count << endl;
	}
	return 0;
}