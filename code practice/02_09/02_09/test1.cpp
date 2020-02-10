#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode 
{
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

vector<int> rightSideView(TreeNode* root) 
{
	vector<int> res;
	if (!root)
	{
		return res;
	}
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		res.push_back(q.front()->val);
		while (size--)
		{
			TreeNode* temp = q.front();
			q.pop();
			if (temp->right)
			{
				q.push(temp->right);
			}

			if (temp->left)
			{
				q.push(temp->left);
			}
		}
	}
	return res;
}

int main()
{

	system("pause");
	return 0;
}