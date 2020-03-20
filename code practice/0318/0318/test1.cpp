//重建二叉树
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x) :
		val(x), 
		left(NULL), 
		right(NULL)
	{

	}
};
/*
	1.前序遍历的第一个结点是根结点
	2.在中序遍历中找到根结点，则根结点的左侧是左子树，右侧是右子树
	3.在前序遍历中找到根结点的下一个结点则是对应下一层的根结点，此时再在中序遍历中该结点的左侧是左子树，右侧是右子树
	4.根据上述掌握的方法可利用递归的方法
*/
TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
	vector<int> leftPre;
	vector<int> rightPre;
	vector<int> leftVin;
	vector<int> rightVin;

	if (pre.size() <= 0 || vin.size() <= 0)
	{
		return nullptr;
	}

	TreeNode* root = new TreeNode(pre[0]);
	int rootPos = 0;
	for (int i = 0; i < vin.size(); i++)
	{
		if (pre[0] == vin[i])
		{
			rootPos = i;
			break;
		}
	}

	for (int i = 0; i < rootPos; i++)
	{
		leftPre.push_back(pre[i + 1]);//先序遍历的根结点的下一个结点
		leftVin.push_back(vin[i]);
	}

	for (int j = rootPos + 1; j < vin.size(); j++)
	{
		rightPre.push_back(pre[j]);
		rightVin.push_back(vin[j]);
	}

	root->left = reConstructBinaryTree(leftPre, leftVin);
	root->right = reConstructBinaryTree(rightPre, rightVin);

	return root;
}

int main1()
{

	system("pause");
	return 0;
}