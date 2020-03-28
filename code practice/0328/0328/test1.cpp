//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
//如果是则输出Yes, 否则输出No。假设输入的数组的任意两个数字都互不相同。
#include<iostream>
#include<vector>
using namespace std;

//由于二叉搜索树的特性是：左子树的结点值比根结点值小，右子树的结点值比根结点值大
//后序遍历序列的最后一个结点为根结点，前一个结点为某一右子树的根结点，依次类推
bool VerifySquenceOfBST(vector<int> sequence)
{
	int size = sequence.size();
	if (0 == size)
	{
		return false;
	}

	while (size--)
	{
		int i = 0;
		while (sequence[i] < sequence[size])
		{
			i++;
		}

		while (sequence[i] > sequence[size])
		{
			i++;
		}

		if (i < size)
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	
	system("pause");
	return 0;
}