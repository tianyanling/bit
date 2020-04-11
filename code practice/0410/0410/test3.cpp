#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > threeSum(vector<int>& nums) 
{
	vector<vector<int> > ret;
	vector<int > vtemp;
	int len = nums.size();
	sort(nums.begin(), nums.end());

	for (int i = 0; i<len - 2; i++) 
	{
		if (i == 0 || (i>0 && nums[i] != nums[i - 1])) 
		{
			int p1 = i + 1, p2 = len - 1; 
			while (p1 < p2)
			{
				if (nums[p1] + nums[p2] < -nums[i]) //a+b+c = 0 -->a+b=-c
				{
					p1++;
				}
				else if (nums[p1] + nums[p2] == -nums[i]) 
				{
					if (p1 == i + 1) 
					{
						vector<int > vtemp{ nums[i], nums[p1], nums[p2] };
						ret.push_back(vtemp);
						vtemp.clear();
					}
					else if (nums[p1] != nums[p1 - 1]) 
					{
						vector<int > vtemp{ nums[i], nums[p1], nums[p2] };
						ret.push_back(vtemp);
						vtemp.clear();
					}
					p1++, p2--;
				}
				else 
				{
					p2--;
				}
			}
		}
	}
	return ret;
}

int main()
{
	vector<int> nums = {-1, 0, 1, 2, -1, -4};

	vector<vector<int>> res = threeSum(nums);
	for (auto &e:res)
	{
		for (auto &m : e)
		{
			cout << m << " ";
		}
		cout << endl;
	}
 	system("pause");
	return 0;
}