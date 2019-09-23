#pragma once
#include<iostream>
#include<cstdio>
using namespace std;

template <class T>
class SeqList
{
	T * m_data;//成员变量
	size_t m_size;
	size_t m_capacity;

	void checkCapacity();
public:
	SeqList(size_t capacity = 10) ://构造函数
		m_data(new T[capacity]),
		m_size(0),
		m_capacity(capacity)
	{
	}

	void push_back(const T &src);
	void pop_back();

	int size();
	~SeqList();//析构函数
};