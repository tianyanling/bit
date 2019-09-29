//Ä£ÄâÊµÏÖvector
#pragma once

namespace tdd
{

template<class T>
class vector
{
	T * m_start;
	T * m_finish;
	T * m_endOfStorage;
public:
	typedef T * iterator;
	typedef const T * const_iterator;

	vector() :
		m_start(nullptr),
		m_finish(nullptr),
		m_endOfStorage(nullptr)
	{

	}

	vector(int n, const T &val = T()) :
		m_start(nullptr),
		m_finish(nullptr),
		m_endOfStorage(nullptr)
	{
		reserve(n);

		for (int i = 0; i < n; i++)
		{
			m_start[i] = val;
		}
	}

	vector(T * start, T * end)
	{
		int size = end - start;
		reserve(size);

		for (int i = 0; i < size; i++)
		{
			m_start[i] = start[i];
		}
		m_finish = m_start + size;
	}

	size_t size()
	{
		return m_finish - m_start;
	}

	int capacity()
	{
		return m_endOfStorage - m_start;
	}

	iterator begin()
	{
		return m_start;
	}

	iterator end()
	{
		return m_finish;
	}

	T & operator [](int i)
	{
		return m_start[i];
	}

	void reserve(size_t size)
	{
		int capacity = m_endOfStorage - m_start;//nullptr-nullptr=0

		if (capacity < size)
		{
			if (capacity == 0)
			{
				capacity = 1;
			}

			while (capacity < size)
			{
				capacity *= 2;
			}
		}

		T * tmp = new T[capacity];
		m_endOfStorage = tmp + capacity;
		m_finish = tmp + size;
		if (m_start != nullptr)
		{
			for (int i = 0; i < size; i++)
			{
				tmp[i] = m_start[i];
			}
			delete[] m_start;
		}
		m_start = tmp;
	}
};

}

