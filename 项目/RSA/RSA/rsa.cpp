#include"rsa.h"
#include<iostream>
#include<ctime>
#include<fstream>
#include<cmath>

RSA::RSA()
{
	getKeys();
}

void RSA::ecrept(const char * filename, const char * fileout)
{
	std::ifstream fin(filename, std::ifstream::binary);//ģʽ���ж�����ģʽ/�ı��ļ�ģʽ
	std::ofstream fout(fileout, std::ifstream::binary);

	if (!fin.is_open())
	{
		perror("input file open failed!");
		return;
	}
	char* buffer = new char[NUMBER];
	DataType* bufferout = new DataType[NUMBER];
	while (!fin.eof())
	{
		fin.read(buffer, NUMBER);
		//gcount()���Ի�ȡ���һ�ζ�ȡ���ֽ���
		int curNum = fin.gcount();
		for (int i = 0; i < curNum; i++)
		{
			bufferout[i] = ecrept((DataType)buffer[i], m_key.m_ekey, m_key.m_pkey);
		}
		fout.write((char*)bufferout, curNum * sizeof(DataType));
	}
	delete[] bufferout;
	delete[] buffer;

	fin.close();
	fout.close();
}

void RSA::decrept(const char * filename, const char * fileout)
{
	std::ifstream fin(filename, std::ifstream::binary);//ģʽ���ж�����ģʽ/�ı��ļ�ģʽ
	std::ofstream fout(fileout, std::ifstream::binary);

	if (!fin.is_open())
	{
		perror("input file open failed!");
		return;
	}
	DataType* buffer = new DataType[NUMBER];
	char* bufferout = new char[NUMBER];
	while (!fin.eof())
	{
		fin.read((char*)buffer, NUMBER*sizeof(DataType));
		//gcount()���Ի�ȡ���һ�ζ�ȡ���ֽ���
		int num = fin.gcount();//ʵ�ʶ�ȡ���ֽ�
		num /= sizeof(DataType);
		for (int i = 0; i < num; i++)
		{
			bufferout[i] = decrept(buffer[i], m_key.m_dkey, m_key.m_pkey);
		}
		fout.write(bufferout, num);
	}
	delete[] bufferout;
	delete[] buffer;

	fout.close();
	fin.close();
}

void RSA::getKeys()
{
	DataType prime1 = getPrime();
	DataType prime2 = getPrime();
	while (prime1 == prime2)
	{
		prime2 = getPrime();
	}
	DataType orla = getOrla(prime1, prime2);
	m_key.m_pkey = getPkey(prime1, prime2);
	m_key.m_ekey = getEkey(orla);
	m_key.m_dkey = getDkey(m_key.m_ekey, orla);
}

Key RSA::getallKey()
{
	return m_key;
}

DataType RSA::ecrept(DataType data, DataType ekey, DataType pkey)
{
	DataType Ai = data;
	DataType msgE = 1;
	while (ekey)
	{
		if (ekey & 1)
		{
			msgE = (msgE * Ai) % pkey;
		}
		ekey >>= 1;
		Ai = (Ai * Ai) % pkey;
	}
	return msgE;
}

DataType RSA::decrept(DataType data, DataType dkey, DataType pkey)
{
	return ecrept(data, dkey, pkey);
}

DataType RSA::getPrime()
{
	srand(time(NULL));//�������
	DataType prime;

	while (true)
	{
		prime = rand() % 100 + 2;//������0��1
		if (isPrime(prime))
		{
			break;
		}
	}
	return prime;
}

bool RSA::isPrime(DataType data)
{
	if (data <= 0)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(data); i++)
	{
		if (data % i == 0)
		{
			return false;
		}
	}
	return true;
}

DataType RSA::getPkey(DataType prime1, DataType prime2)
{
	return prime1*prime2;
}

DataType RSA::getOrla(DataType prime1, DataType prime2)
{
	return (prime1 - 1)*(prime2 - 1);
}

DataType RSA::getEkey(DataType orla)
{
	srand(time(NULL));

	DataType ekey;
	while (true)
	{
		ekey = rand() % orla;
		if (ekey > 1 && getGcd(ekey, orla) == 1)//�����������Լ��Ϊ1��ʾ����
		{
			return ekey;
		}
	}
}

DataType RSA::getDkey(DataType ekey, DataType orla)
{
	DataType dkey = orla / ekey;
	while (true)
	{
		if ((ekey * dkey) % orla == 1)
		{
			return dkey;
		}
		dkey++;
	}
}

//շת����������Լ��
//����a,b�����������Լ�������Եȼ�Ϊ b,a%b --->a%b, a%b%(a%b),....ֱ�����ǵ�����Ϊ0
DataType RSA::getGcd(DataType data1, DataType data2)
{
	DataType residual;
	while (residual = data1%data2)
	{
		data1 = data2;
		data2 = residual;
	}
	return data2;
}
