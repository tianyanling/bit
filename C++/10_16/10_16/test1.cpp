#include<iostream>
#include<stack>
using namespace std;

template < class T >
class TreeNode
{
	T m_val;

	TreeNode<T> * m_left;
	TreeNode<T> * m_right;
public:
	TreeNode(const T &val) :
		m_val(val)
	{

	}

	template <class T>
	friend class Tree;
};

template <class T>
class Tree
{
	TreeNode<T> * m_root;

	static TreeNode<T> *  maketree(const T * val, const T & end, int &i)
	{
		if (val[i] == end)
		{
			i++;
			return nullptr;
		}

		TreeNode<T> * root = new TreeNode<T>(val[i]);
		i++;

		root->m_left = maketree(val, end, i);
		root->m_right = maketree(val, end, i);

		return root;
	}
public:
	Tree() :
		m_root(nullptr)
	{

	}

	Tree(const T * val, const T & end)
	{
		int i = 0;
		m_root = maketree(val, end, i);
	}

	void Mirror(TreeNode *m_root)
	{
		if (!m_root)
		{
			return;
		}

		swap(m_root->left, m_root->right);

		Mirror(m_root->left);
		Mirror(m_root->right);
	}
};


int main()
{
	Tree<char> tr("ABD##E##CFH##I##G##", '#');
	tr.Mirror();
	system("pause");
	return 0;
}