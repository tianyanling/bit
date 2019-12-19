#include<iostream>
#include<vector>
using namespace std;

void oddInOddEvenInEven(vector<int>& arr, int len) 
{
	vector<int> v1;
	vector<int> v2;
	int i = 0, j = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)//偶数进v1数组
		{
			v1.push_back(arr[i]);
		}
		else//奇数进v2数组
		{
			v2.push_back(arr[i]);
		}
	}

	vector<int> tmp;
	if (v1.size() > len/2)
	{ 
		j = 0;
		for (i = 0; i < v1.size(); i++)
		{
			tmp.push_back(v1[i]);

			if (!v2.empty())
			{
				tmp.push_back(v2[j]);
				j++;
				v2.pop_back();
			}
		}
	}
	else if (v2.size() > len/2)
	{
		
		for (j = 0, i = 0; j<v2.size(); j++)
		{
			if (!v1.empty())
			{ 
				tmp.push_back(v1[i]);
				i++;
				v1.pop_back();
			}

			tmp.push_back(v2[j]);
		}
	}

	for (i = 0; i < tmp.size(); i++)
	{
		cout << tmp[i] << " ";
	}
	cout << endl;
}

int main1()
{
	vector<int> arr{ 7,7,9,5,1,6,7,9,3,2,6};
	int len = arr.size();

	oddInOddEvenInEven(arr, len);
	system("pause");
	return 0;
}