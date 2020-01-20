//长按键入
//https://leetcode-cn.com/problems/long-pressed-name/

//你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，按键可能会被长按，而字符可能被输入 1 次或多次。
//你将会检查键盘输入的字符 typed。
//如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），那么就返回 True。

#include<iostream>
#include<string>
#include<set>
using namespace std;

bool isLongPressedName(string name, string typed) 
{
	set<int> tmp;
	int len_name = name.size();
	int len_typed = typed.size();
	int i = 0, j = 0;
	if (name == typed)
	{
		return true;
	}
	
	if (len_name > len_typed)
	{
		return false;
	}

	while(i < len_name || j < len_typed)
	{
		if (name[i] == typed[j])
		{
			i++;
			j++;
		}
		else if (j > 0 && name[i -1] == typed[j - 1])
		{
			j++;
		} 
		else
		{
			return false;
		}
	}

	for (int m = len_name - 2; m < len_typed; m++)
	{
		tmp.insert(typed[i]);
	}
	if (tmp.size() == len_typed - len_name)
	{
		return false;
	}
	return i == len_name;
}

int main()
{
	string name = "tian";
	string typed = "tiiiannnn";

	cout << isLongPressedName(name, typed) << endl;
	system("pause");
	return 0;
}