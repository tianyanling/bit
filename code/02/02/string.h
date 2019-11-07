//string ���ģ��ʵ��
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<cstring>
#include<cstdlib>
#define DEFAULTCAPA 16

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
			m_size = 0;
		}
		else
		{
			m_size = strlen(str);
		}
		capacity(m_size);
		m_data = new char[m_capacity];
		strncpy(m_data, str, m_size);//��ֹm_dataΪ��
	}
	
	String(String &s)//�����÷�ֹ���޵ݹ�
	{
		m_size = s.m_size;
		m_capacity = s.m_capacity;

		m_data = new char[m_capacity];
		strcpy(m_data, s.m_data);
	}

	String(size_t n, char ch):
		m_size(n),
		m_capacity(DEFAULTCAPA)
	{
		capacity(m_size);

		m_data = new char[m_capacity];
		memset(m_data, ch, m_size);//memset�ǽ��г�ʼ��
	}

	void capacity(size_t size)
	{
		if (size >= m_capacity)
		{
			m_capacity = (size / DEFAULTCAPA + 1)*DEFAULTCAPA;//����
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
};