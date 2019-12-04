#pragma once

namespace tdd
{
enum Color { RED, BLACK };//用枚举类型定义红色和黑色

template <class T>
class RBTreeNode
{
	T m_data;
	RBTreeNode<T> * m_left;
	RBTreeNode<T> * m_right;
	RBTreeNode<T> * m_parent;
	Color m_color;
public:
	RBTreeNode(const T& val = T(), Color color = RED)://不传参默认为红色
		m_data(val),
		m_left(nullptr),
		m_right(nullptr),
		m_color(color)
	{

	}

	template<class T>
	friend class RBTree;
};

template <class T>
class RBTree
{
	RBTreeNode<T> * m_head;//创建一个头结点，使头结点的父结点始终指向红黑树的根结点
	//它的左孩子始终指向红黑树的最小结点，它的右孩子始终指向红黑树的最大结点

	void Lround(RBTreeNode<T> * pre)//左单旋
	{
		RBTreeNode<T> * parent = pre->m_parent;
		RBTreeNode<T> * cur = pre->m_right;

		//若进行左单旋，可能需要对三个结点进行调整
		cur->m_parent = parent;
		if (parent != m_head)//
		{
			if (parent->m_left == pre)
			{
				parent->m_left = cur;
			}
			else
			{
				parent->m_right = cur;
			}
		}
		else//若该结点没有父结点，则该结点就是根结点
		{
			m_head->m_parent = cur;
			cur->m_parent = m_head;
		}

		//该结点的左孩子会成为原来父结点的右孩子
		pre->m_right = cur->m_left;
		if (cur->m_left)//若该结点原来的左孩子存在，则它的父亲结点会变成pre
		{
			cur->m_left->m_parent = pre;
		}

		cur->m_left = pre;//该结点之前的父结点将会变为该结点的左孩子
		pre->m_parent = cur;//该结点变为原来父亲结点的父结点
	}

	void Rround(RBTreeNode<T> * pre)//右单旋
	{
		RBTreeNode<T> * parent = pre->m_parent;
		RBTreeNode<T> * cur = pre->m_left;

		cur->m_parent = parent;
		if (parent != m_head)
		{
			if (parent->m_left == pre)
			{
				parent->m_left = cur;
			}
			else
			{
				parent->m_right = cur;
			}
		}
		else
		{
			m_head->m_parent = cur;
			cur->m_parent = m_head;
		}

		pre->m_left = cur->m_right;
		if (cur->m_right)
		{
			cur->m_right->m_parent = pre;
		}

		cur->m_right = pre;
		pre->m_parent = cur;
	}

public:
	RBTree()
	{
		m_head = new RBTreeNode<T>;
	}

	RBTreeNode<T> * &getRoot()//获取根结点，根结点为头结点的父亲结点
	{
		return m_head->m_parent;
	}

	RBTreeNode<T> * leftMost()//获取红黑树的最小结点，即左子树中最左边的那个结点
	{
		RBTreeNode<T> * cur = getRoot();

		for (; cur->m_left; cur = cur->m_left);
		return cur;
	}

	RBTreeNode<T> * rightMost()//获取红黑树的最大结点，即左子树中最右边的那个结点
	{
		RBTreeNode<T> * cur = getRoot();

		for (; cur->m_right; cur = cur->m_right);
		return cur;
	}

	

	bool insert(const T & val)
	{
		RBTreeNode<T> * &root = getRoot();

		if (root)//有头结点的情况
		{
			RBTreeNode<T> * cur = root;
			RBTreeNode<T> *pre = nullptr;

			while (cur)
			{
				if (val < cur->m_data)
				{
					pre = cur;
					cur = cur->m_left;
				}
				else if (val > cur->m_data)
				{
					pre = cur;
					cur = cur->m_right;
				}
				else
				{
					return false;
				}
			}
			cur = new RBTreeNode<T>(val);
			if (val < pre->m_data)
			{
				pre->m_left = cur;
			}
			else
			{
				pre->m_right = cur;
			}

			cur->m_parent = pre;
			//*************************红黑树*******************************
			//当新插入的结点的父亲结点为黑色，则不用进行任何调整，故只考虑插入结点的父亲结点为红色的情况
			if (pre->m_color == RED)
			{
				RBTreeNode<T> * grand = pre->m_parent;
				RBTreeNode<T> * uncle;

				if (pre == grand->m_left && pre->m_color == RED)
				{
					while (pre != m_head)
					{
						grand = pre->m_parent;
						uncle = grand->m_right;
						
						//第三种情况,当uncle的颜色为红色
						if (uncle && uncle->m_color == RED)
						{
							pre->m_color = RED;
							grand->m_color = BLACK;
							uncle->m_color = RED;

							cur = grand;//把grand当做cur继续向上调整
							pre = cur->m_parent;
						}
						else
						{//第五种情况（转化为第四种情况），即叔叔结点为黑色
							if (cur == pre->m_right)
							{
								Lround(pre);//进行左旋
								RBTreeNode<T> * tmp;
								tmp = pre;
								pre = cur;
								cur = pre;
							}
							//第四种情况
							Rround(grand);//对grand进行右旋
							pre->m_color = BLACK;
							grand->m_color = RED;
							break;
						}
					}
				}
				else//***********************上下是镜像*******************************
				{
					while (pre != m_head && pre->m_color == RED)
					{
						grand = pre->m_parent;
						uncle = grand->m_left;

						
						if (uncle && uncle->m_color == RED)
						{
							pre->m_color = RED;
							grand->m_color = BLACK;
							uncle->m_color = RED;

							cur = grand;
							pre = cur->m_parent;
						}
						else
						{
							if (cur == pre->m_left)
							{
								Rround(pre);
								RBTreeNode<T> * tmp;
								tmp = pre;
								pre = cur;
								cur = pre;
							}
							
							Lround(grand);
							pre->m_color = BLACK;
							grand->m_color = RED;
							break;
						}
					}
				}
			}
		}

		//省略的else为第二种情况

		else//第一种情况，没有头结点，即根结点即为头结点
		{
			root = new RBTreeNode<T>(val, BLACK);
			root->m_parent = m_head;
			m_head->m_parent = root;
		}

		root->m_color = BLACK;//设置根结点为黑色
		m_head->m_left = leftMost();//头结点的左子树为红黑树的最小结点
		m_head->m_right = rightMost();//头结点的右子树为红黑树的最大结点
		return true;
	}
};

};