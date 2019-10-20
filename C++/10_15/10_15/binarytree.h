#pragma once
#include<stack>

namespace tdd
{
	template <class T>
	class BTNode
	{
		T m_val;
		BTNode<T> * m_left;
		BTNode<T> * m_right;
	public:
		BTNode(const T & val):
			m_val(val)
		{

		}

		template <class T>
		friend class Tree;
	};

	template <class T>
	class Tree
	{
		BTNode<T> * m_root;

		static BTNode<T> * maketree(const T * val, const T & end, int & i)
		{
			if (val[i] == end)
			{
				i++;
				return nullptr;
			}

			BTNode<T> * root = new BTNode<T>(val[i]);
			i++;

			root->m_left = maketree(val, end, i);
			root->m_right = maketree( val, end, i);

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
			m_root = maketree(val, end, i);//i表示下标
		}

		void pre_order()
		{
			BTNode<T> * cur = m_root;
			stack<BTNode<T> *> st;

			while (cur)
			{
				cout << cur->m_val;
				if (cur->m_right)
				{
					st.push(cur->m_right);
				}

				if (cur->m_left)
				{
					cur = cur->m_left;
				}
				else
				{
					if (st.empty())
					{
						cur = nullptr;
					}
					else
					{
						cur = st.top();
						st.pop();
					}
				}
			}
		}

		void in_order()
		{
			BTNode<T> * cur = m_root;
			stack<BTNode<T> *> st;

			while (cur || !st.empty())
			{
				for (; cur; cur = cur->m_left)
				{
					st.push(cur);
				}

				if (!st.empty())
				{
					cur = st.top();
					st.pop();

					cout << cur->m_val;

					cur = cur->m_right;
				}
			}
		}

		void post_order()
		{
			BTNode<T> * cur = m_root;
			stack<BTNode<T> *> st;
			stack<bool> tag;

			while (cur || !st.empty())
			{
				for (; cur; cur = cur->m_left)
				{
					st.push(cur);
					tag.push(false);
				}

				while (!st.empty() && tag.top())
				{
					cur = st.top();
					cout << cur->m_val;
					st.pop();
					tag.pop();

					cur = nullptr;
				}

				if (!st.empty())
				{
					tag.top() = true;
					cur = st.top();
					cur = cur->m_right;
				}
			}
		}

		//求最小公共祖先
		BTNode<T> * post_lowestCommonAncestor(BTNode<T> * p, BTNode<T> * q)//采用后序方法
		{
			BTNode<T> * cur = m_root;
			stack<BTNode<T> *> st;
			stack<bool> tag;


			stack<BTNode<T> *> res1;
			stack<BTNode<T> *> res2;

			while (cur || !st.empty())
			{
				for (; cur; cur = cur->m_left)
				{
					st.push(cur);
					tag.push(false);
				}

				while (!st.empty() && tag.top())
				{
					cur = st.top();
					if (cur == p || cur == q)
					{
						if (res1.empty())
						{
							res1 = st;
						}
						else
						{
							res2 = st;
						}
					}
					st.pop();
					tag.pop();

					cur = nullptr;
				}

				if (!st.empty())
				{
					tag.top() = true;
					cur = st.top();
					cur = cur->m_right;
				}
			}

			if (res1.size() < res2.size())
			{
				swap(res1, res2);
			}

			int i = res1.size() - res2.size();

			for (; i > 0; i--)
			{
				res1.pop();
			}

			while (res1.top() != res2.top())
			{
				res1.pop();
				res2.pop();
			}
		
			return res1.top();
		}

		BTNode<T> * in_lowestCommonAncestor(BTNode<T> * p, BTNode<T> * q)//采用中序方法
		{
			BTNode<T> * cur = m_root;
			stack<BTNode<T> *> st;
			BTNode<T> * tmp = nullptr;
			size_t stsize = 0;
			while (cur || !st.empty())
			{
				for (; cur; cur = cur->m_left)
				{
					st.push(cur);
				}

				if (!st.empty())
				{
					cur = st.top();

					if (stsize > st.size())
					{
						tmp = cur;
						stsize = st.size();
					}

					if (cur == p || cur == q)
					{
						if (!tmp)
						{
							tmp = cur;
							stsize = st.size();
						}
						else
						{
							return tmp;
						}
					}

					st.pop();

					cur = cur->m_right;
				}
			}
			return nullptr;
		}

		void test()
		{
			BTNode<T> * t1 = post_lowestCommonAncestor(m_root->m_left->m_right, m_root->m_right);
			BTNode<T> * t2= in_lowestCommonAncestor(m_root->m_left->m_right, m_root->m_right);
			cout << t1->m_val << endl;
			cout << t2->m_val;
		}

		BTNode<T> * Mirror(BTNode *Root)
		{
			BTNode<T> * cur = m_root;
			if (!cur)
			{
				return;
			}

			if (cur->m_left == nullptr && cur->m_right == nullptr)
			{
				return;
			}

			swap(cur->m_left, cur->m_right);

			Mirror(cur->m_left);
			Mirror(cur->m_right);
		}

		void test1()
		{
			BTNode<T> * t = Mirror(m_root);
			cout << t->m_val;
		}
	};
	
};