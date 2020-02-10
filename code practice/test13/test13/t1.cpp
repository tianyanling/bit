//参数解析
//https://www.nowcoder.com/questionTerminal/668603dc307e4ef4bb07bcd0615ea677?orderByHotValue=0&done=0&pos=40&onlyReference=false
//解析规则:
//1.参数分隔符为空格
//2.对于用“”包含起来的参数，如果中间有空格，不能解析为多个参数。比如在命令行输入xcopy / s “C : \program files” “d : \”时，参数仍然是4个，第3个参数应该是字符串C : \program files，而不是C : \program，注意输出参数时，需要将“”去掉，引号不存在嵌套情况。
//3.参数不定长

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main1()
{
	string str;
	vector<string> vs;
	int flag = 0;//flag=0表示没有单独的一个引号，flag=1表示引号单独出现
	int pos = -1;//上一个空格的位置
	int count = 0;//引号的个数

	while (getline(cin,str))
	{
		str += ' ';//在字符串末尾追加一个空格，方便处理
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ' && !flag)//在该引号前没有与该引号配对的
			{
				vs.push_back(str.substr(pos + 1, i - pos-1));
				pos = i;
			}
			if (str[i] == '"')
			{
				if (count % 2 == 0)
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
				count++;
			}
		}

		cout << vs.size() << endl;
		for (unsigned i = 0; i < vs.size(); i++)
		{
			if (vs[i][0] == '"')
			{
				vs[i] = vs[i].substr(1, vs[i].size() - 2);//去掉引号
				
			}
			cout << vs[i] << endl;
		}
	}

	system("pause");
	return 0;
}