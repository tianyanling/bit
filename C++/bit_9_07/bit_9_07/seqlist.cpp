#include"seqlist.h"
#include<cstdlib>

template <class T>
void SeqList<T>::checkCapacity()
{
	if (m_size == m_capacity)
	{
		m_capacity *= 2;

		m_data = (T *)realloc(m_data, szieof(T) * m_capacity);
		//�˴���realloc����new�ã���new����һ����̬�ڴ棬���Ǵ�ʱҪ��������������ʱ��ָ�뽫����Ұָ��
		//new�ʺ�����ǳ����
	}
}

template <class T>
void SeqList<T>::push_back(const T &src)
{
	checkCapacity();

	m_data[m_size] = src;
	m_size++;
}

template <class T>
void SeqList<T>::pop_back()
{
	if (m_size == 0)
	{
		return;
	}
	m_szie--;
}

template <class T>
int SeqList<T>::size()
{
	return m_size;
}

template <class T>
SeqList<T>::~SeqList()
{
	if (m_data)
	{
		delete[] m_data;
	}
	m_size = m_capacity = 0;
}