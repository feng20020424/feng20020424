#pragma once
#include<iostream>
#include<string>
using namespace std;
template <typename T>
class nb
{
public:
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator=(const MyArray&arr)
	{

	}
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			pAddress = NULL;
		}

	}
private:
	T* pAddress;//堆区开辟的数组指针
	int m_Capacity;//内存容量
	int m_Size;//数组大小
};