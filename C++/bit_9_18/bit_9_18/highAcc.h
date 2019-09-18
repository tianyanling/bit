#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace  std;

#define NUMSIZE 10000

class HighAcc
{
	char m_data[NUMSIZE];
	size_t m_size;
public:
	HighAcc(string s):
		m_size(s.size())
	{
		memset(m_data, 0, NUMSIZE);
		string::reverse_iterator i;
		for (i = s.rbegin(); i != s.rend; i++)//ÄæÏòµü´úÆ÷
		{
			m_data[j] = *i - '0';
			j++;
		}
	}

	HighAcc(string s)
	{
		string s;
		int i;
		for (i = m_size - 1; i >= 0; i--)
		{
			s.pushback() = m_data[i] + '0';
		}
	}
};