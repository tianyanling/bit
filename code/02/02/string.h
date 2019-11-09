//string 类的模拟实现
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;

#define DEFAULTCAPA 16
#define COUNTCAPA(size) (((size) / DEFAULTCAPA + 1)*DEFAULTCAPA)

class String
{
	char * m_data;
	size_t m_size;
	size_t m_capacity;
public:
	String(const char * str = "") :
		m_capacity(DEFAULTCAPA)
	{
		if (nullptr == str)
		{
			str = "";
		}

		m_size = strlen(str);
		m_capacity = COUNTCAPA(m_size);
		m_data = new char[m_capacity];
		strncpy(m_data, str, m_size);//防止m_data为空
	}
	
	String(String &s)//传引用防止无限递归
	{
		m_size = s.m_size;
		m_capacity = s.m_capacity;

		m_data = new char[m_capacity];
		strcpy(m_data, s.m_data);
	}

	String(size_t n, char ch):
		m_size(n),
		m_capacity(COUNTCAPA(n))
	{
		m_data = new char[m_capacity];
		memset(m_data, ch, m_size);//memset是进行初始化
	}

	void reserve(size_t size)
	{
		if (size >= m_capacity)
		{
			m_capacity = COUNTCAPA(size);//扩容
			m_data = (char *)realloc(m_data, m_capacity);
		}
	}

	~String()
	{
		if (m_data)
		{
			delete[] m_data;
			m_data = NULL;
		}
		m_size = m_capacity = 0; 
	}

	friend ostream & operator<<(ostream & os, const String &s);
	friend istream & operator >> (istream & is, String &s);
};

ostream & operator<<(ostream & os, const String &s)
{
	int i;

	for (i = 0; i < s.m_size; i++)
	{
		os << s.m_data[i];
	}
	return os;
}

istream & operator >> (istream & is, String &s)
{
	char * tmp = new char[1024];
	is.getline(tmp, 1024);

	s.m_size = strlen(tmp);
	s.m_capacity = COUNTCAPA(s.m_size);
	delete[]s.m_data;
	s.m_data = tmp;

	return is;
}








