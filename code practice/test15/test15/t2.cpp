//手套
//链接：https://www.nowcoder.com/questionTerminal/365d5722fff640a0b6684391153e58d8?pos=2&orderByHotValue=0&done=0
//题目描述：在地下室里放着n种颜色的手套，手套分左右手，但是每种颜色的左右手手套个数不一定相同。
//A先生现在要出门，所以他要去地下室选手套。但是昏暗的灯光让他无法分辨手套的颜色，只能分辨出左右手。
//所以他会多拿一些手套，然后选出一双颜色相同的左右手手套。现在的问题是，他至少要拿多少只手套(左手加右手)，才能保证一定能选出一双颜色相同的手套。
//给定颜色种数n(1≤n≤13), 同时给定两个长度为n的数组left, right, 分别代表每种颜色左右手手套的数量。
//数据保证左右的手套总数均不超过26，且一定存在至少一种合法方案

//思路：选出一边的手套至少有多少个能够保证覆盖n种颜色？
//答案是 min(leftSum-leftMin+1,rightSum-rightMin+1)，这个确定以后，
//只需要在另一边随便选择一个就能够保证至少有一种颜色匹配了
//另外要注意某种颜色手套数为0的情况
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
		if (left[i] * right[i] == 0)//判断左右手套种颜色出现0的情况
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
	//判断左右手套中哪种手套能覆盖n中颜色，另个方手套就只需要随便拿一个即可
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