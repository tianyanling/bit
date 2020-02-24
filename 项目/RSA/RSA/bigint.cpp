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

//模拟加法操作
string BigInt::add(string num1, string num2)
{
	//位数补齐
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNum = abs(len1 - len2);//为了进行补零操作
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
	int step = 0;//进位
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
	//处理最高位进位
	if (step == 1)
	{
		ret.insert(0, 1, '1');
	}
	return ret;
}

//模拟减法操作
string BigInt::sub(string num1, string num2)
{
	//位数补齐
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNum = abs(len1 - len2);//为了进行补零操作
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
		//判断是否需要借位
		if (num1[i] < num2[i])
		{
			num1[i] += 10;
			//更新高位
			num1[i - 1]--;
		}
		ret[i] = (num1[i] - '0') - (num2[i] - '0') + '0';//相减完变为字符
	}
	//删除前置0
	while (ret.size()  > 1 && ret[0] == '0')
	{
		ret.erase(0,1);
	}
	return ret;
}

//模拟乘法操作
string BigInt::mul(string num1, string num2)
{
	//简化乘法的过程，比较小的数*比较大的数
	if (num2.size() >num1.size())
	{
		swap(num2, num1);
	}
	string ret = "0";
	for (int i = num2.size() - 1; i >= 0; i--)
	{
		//获取当前乘数对应位的值
		int curDigit = num2[i] - '0';
		int step = 0;//进位
		//当前乘积的结果
		string tmp = num1;
		for (int j = tmp.size() - 1; j >= 0; j--)
		{
			//逐位相乘
			tmp[j] = (tmp[j] - '0')*curDigit + step;
			//更新进位
			if (tmp[j] > 9)
			{
				step = tmp[j] / 10;
				tmp[j] = tmp[j] - step * 10;
			}
			else
			{
				step = 0;
			}
			tmp[j] += '0';//还原字符
		}
		//判断最高位的进位情况
		if(step>0)
		{
			tmp.insert(0, 1, step + '0');
		}
		//补零
		tmp.append(num2.size() - 1 - i, '0');
		//累加一次乘法的结果
		ret = add(ret, tmp);
	}
	return ret;
}

//模拟除法操作，借助减法完成
pair<string, string> BigInt::dev(string num1, string num2)
{
	string ret;//商
	string rem = num1;//余数
	int diffNum = num1.size() - num2.size();
	num2.append(diffNum, '0');
	for (int i = 0; i <= diffNum; i++)//执行diffNum+1次
	{
		//记录减法执行的次数
		char count = '0';
		while (true)
		{
			if (less(rem, num2))//余数与除数进行比较
			{
				break;
			}
			rem = sub(rem, num2);
			count++;
		}
		ret += count;
		//除数减小10倍
		num2.pop_back();
	}
	//删除前置0
	while (ret.size() > 1 && ret[0] == '0')
	{
		ret.erase(0, 1);
	}
	return make_pair(ret, rem);//返回<商，余数>
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