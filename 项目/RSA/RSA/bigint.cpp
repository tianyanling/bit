#include"bigint.h"

BigInt::BigInt(const string &num):
	m_number(num)
{

}

BigInt BigInt::operator +(BigInt &bi)
{
	string ret = add(m_number, bi.m_number);
	return BigInt(ret);
}

BigInt BigInt::operator - (BigInt &bi)
{
	string ret =  sub(m_number, bi.m_number);
	return BigInt(ret);
}

BigInt BigInt::operator * (BigInt &bi)
{
	string ret = mul(m_number, bi.m_number);
	return BigInt(ret);
}

BigInt BigInt::operator / (BigInt &bi)
{
	pair<string,string> ret = dev(m_number, bi.m_number);
	return BigInt(ret.first);
}

BigInt BigInt::operator %(BigInt &bi)
{
	pair<string, string> ret = dev(m_number, bi.m_number);
	return BigInt(ret.second);
}

//ģ��ӷ�����
string BigInt::add(string num1, string num2)
{
	//λ������
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNum = abs(len1 - len2);//Ϊ�˽��в������
	int longSize = len1 > len2 ? len1 : len2;
	if (len1 < len2)
	{
		num1.insert(0, diffNum, '0');
	}
	else if (len1 > len2)
	{
		num2.insert(0, diffNum, '0');
	}

	string ret;
	ret.resize(longSize);
	int step = 0;//��λ
	for (int i = longSize-1; i >= 0; i--)
	{
		ret[i] = (num1[i] - '0') + (num2[i] - '0') + step;
		ret[i] += '0';
		if (ret[i] > '9')
		{
			ret[i] -= 10;
			step = 1;
		}
		else
		{
			step = 0;
		}
	}
	//�������λ��λ
	if (step == 1)
	{
		ret.insert(0, 1, '1');
	}
	return ret;
}

//ģ���������
string BigInt::sub(string num1, string num2)
{
	//λ������
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNum = abs(len1 - len2);//Ϊ�˽��в������
	int longSize = len1 > len2 ? len1 : len2;
	if (len1 < len2)
	{
		num1.insert(0, diffNum, '0');
	}
	else if (len1 > len2)
	{
		num2.insert(0, diffNum, '0');
	}

	string ret;
	ret.resize(longSize);
	for (int i = longSize - 1; i >= 0; i--)
	{
		//�ж��Ƿ���Ҫ��λ
		if (num1[i] < num2[i])
		{
			num1[i] += 10;
			//���¸�λ
			num1[i - 1]--;
		}
		ret[i] = (num1[i] - '0') - (num2[i] - '0') + '0';//������Ϊ�ַ�
	}
	//ɾ��ǰ��0
	while (ret.size()  > 1 && ret[0] == '0')
	{
		ret.erase(0,1);
	}
	return ret;
}

//ģ��˷�����
string BigInt::mul(string num1, string num2)
{
	//�򻯳˷��Ĺ��̣��Ƚ�С����*�Ƚϴ����
	if (num2.size() >num1.size())
	{
		swap(num2, num1);
	}
	string ret = "0";
	for (int i = num2.size() - 1; i >= 0; i--)
	{
		//��ȡ��ǰ������Ӧλ��ֵ
		int curDigit = num2[i] - '0';
		int step = 0;//��λ
		//��ǰ�˻��Ľ��
		string tmp = num1;
		for (int j = tmp.size() - 1; j >= 0; j--)
		{
			//��λ���
			tmp[j] = (tmp[j] - '0')*curDigit + step;
			//���½�λ
			if (tmp[j] > 9)
			{
				step = tmp[j] / 10;
				tmp[j] = tmp[j] - step * 10;
			}
			else
			{
				step = 0;
			}
			tmp[j] += '0';//��ԭ�ַ�
		}
		//�ж����λ�Ľ�λ���
		if(step>0)
		{
			tmp.insert(0, 1, step + '0');
		}
		//����
		tmp.append(num2.size() - 1 - i, '0');
		//�ۼ�һ�γ˷��Ľ��
		ret = add(ret, tmp);
	}
	return ret;
}

//ģ����������������������
pair<string, string> BigInt::dev(string num1, string num2)
{
	string ret;//��
	string rem = num1;//����
	int diffNum = num1.size() - num2.size();
	num2.append(diffNum, '0');
	for (int i = 0; i <= diffNum; i++)//ִ��diffNum+1��
	{
		//��¼����ִ�еĴ���
		char count = '0';
		while (true)
		{
			if (less(rem, num2))//������������бȽ�
			{
				break;
			}
			rem = sub(rem, num2);
			count++;
		}
		ret += count;
		//������С10��
		num2.pop_back();
	}
	//ɾ��ǰ��0
	while (ret.size() > 1 && ret[0] == '0')
	{
		ret.erase(0, 1);
	}
	return make_pair(ret, rem);//����<�̣�����>
}

bool BigInt::less(string& num1, string& num2)
{
	if (num1.size() < num2.size())
	{
		return true;
	}
	if (num1.size() > num2.size())
	{
		return false;
	}
	return num1 < num2;
}

ostream& operator <<(ostream & _cout, BigInt &bi)
{
	_cout << bi.m_number << endl;
	return _cout;
}