//�ؽ�������
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
	1.ǰ������ĵ�һ������Ǹ����
	2.������������ҵ�����㣬���������������������Ҳ���������
	3.��ǰ��������ҵ���������һ��������Ƕ�Ӧ��һ��ĸ���㣬��ʱ������������иý�����������������Ҳ���������
	4.�����������յķ��������õݹ�ķ���
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
		leftPre.push_back(pre[i + 1]);//��������ĸ�������һ�����
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