#pragma once

namespace tdd
{
enum Color { RED, BLACK };//��ö�����Ͷ����ɫ�ͺ�ɫ

template <class T>
class RBTreeNode
{
	T m_data;
	RBTreeNode<T> * m_left;
	RBTreeNode<T> * m_right;
	RBTreeNode<T> * m_parent;
	Color m_color;
public:
	RBTreeNode(const T& val = T(), Color color = RED)://������Ĭ��Ϊ��ɫ
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
	RBTreeNode<T> * m_head;//����һ��ͷ��㣬ʹͷ���ĸ����ʼ��ָ�������ĸ����
	//��������ʼ��ָ����������С��㣬�����Һ���ʼ��ָ�������������

	void Lround(RBTreeNode<T> * pre)//����
	{
		RBTreeNode<T> * parent = pre->m_parent;
		RBTreeNode<T> * cur = pre->m_right;

		//������������������Ҫ�����������е���
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
		else//���ý��û�и���㣬��ý����Ǹ����
		{
			m_head->m_parent = cur;
			cur->m_parent = m_head;
		}

		//�ý������ӻ��Ϊԭ���������Һ���
		pre->m_right = cur->m_left;
		if (cur->m_left)//���ý��ԭ�������Ӵ��ڣ������ĸ��׽�����pre
		{
			cur->m_left->m_parent = pre;
		}

		cur->m_left = pre;//�ý��֮ǰ�ĸ���㽫���Ϊ�ý�������
		pre->m_parent = cur;//�ý���Ϊԭ�����׽��ĸ����
	}

	void Rround(RBTreeNode<T> * pre)//�ҵ���
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

	RBTreeNode<T> * &getRoot()//��ȡ����㣬�����Ϊͷ���ĸ��׽��
	{
		return m_head->m_parent;
	}

	RBTreeNode<T> * leftMost()//��ȡ���������С��㣬��������������ߵ��Ǹ����
	{
		RBTreeNode<T> * cur = getRoot();

		for (; cur->m_left; cur = cur->m_left);
		return cur;
	}

	RBTreeNode<T> * rightMost()//��ȡ�����������㣬�������������ұߵ��Ǹ����
	{
		RBTreeNode<T> * cur = getRoot();

		for (; cur->m_right; cur = cur->m_right);
		return cur;
	}

	

	bool insert(const T & val)
	{
		RBTreeNode<T> * &root = getRoot();

		if (root)//��ͷ�������
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
			//*************************�����*******************************
			//���²���Ľ��ĸ��׽��Ϊ��ɫ�����ý����κε�������ֻ���ǲ�����ĸ��׽��Ϊ��ɫ�����
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
						
						//���������,��uncle����ɫΪ��ɫ
						if (uncle && uncle->m_color == RED)
						{
							pre->m_color = RED;
							grand->m_color = BLACK;
							uncle->m_color = RED;

							cur = grand;//��grand����cur�������ϵ���
							pre = cur->m_parent;
						}
						else
						{//�����������ת��Ϊ���������������������Ϊ��ɫ
							if (cur == pre->m_right)
							{
								Lround(pre);//��������
								RBTreeNode<T> * tmp;
								tmp = pre;
								pre = cur;
								cur = pre;
							}
							//���������
							Rround(grand);//��grand��������
							pre->m_color = BLACK;
							grand->m_color = RED;
							break;
						}
					}
				}
				else//***********************�����Ǿ���*******************************
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

		//ʡ�Ե�elseΪ�ڶ������

		else//��һ�������û��ͷ��㣬������㼴Ϊͷ���
		{
			root = new RBTreeNode<T>(val, BLACK);
			root->m_parent = m_head;
			m_head->m_parent = root;
		}

		root->m_color = BLACK;//���ø����Ϊ��ɫ
		m_head->m_left = leftMost();//ͷ����������Ϊ���������С���
		m_head->m_right = rightMost();//ͷ����������Ϊ������������
		return true;
	}
};

};