#pragma once
#include<iostream>
using namespace std;

template <class T>
class SeqList
{
	T * m_data;
	size_t m_size;
	size_t m_capacity;

	void checkCapacity();
public:
	SeqList(size_t capacity = 10):
		m_data(new T [capacity]),
		m_size(0),
		m_capacity(capacity)
	{

	}

	void pushback(const T &src);
	void popback();

	int size();
	~SeqList();
};

template <class T>
void SeqList<T>::checkCapacity()
{
	if (m_size == m_capacity)
	{
		m_capacity *= 2;
		m_data = (T *)realloc(m_data, sizeof(T) * m_capacity);
		/*//不需要调用析构函数，故不用new开辟空间，当一些变量不需要析构时可以使用C中的函数扩容
		m_capacity *= 2;
		T * newSpace = new T[m_capacity];

		for (int i = 0; i < m_size; i++)
		{
		newSpace[i] = m_data[i];
		}
		delete[] m_data;
		m_data = newSpace;
		*/
	}
}

template <class T>
void SeqList<T>::pushback(const T &src)
{
	checkCapacity();

	m_data[m_size] = src;
	m_size++;
}


template <class T>
void SeqList<T>::popback()
{
	if (m_size == 0)
	{
		return;
	}
	m_size--;
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