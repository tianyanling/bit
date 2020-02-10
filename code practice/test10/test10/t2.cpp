#include<iostream>
#include<string>
using namespace std;

//Êý×Ö
int Number(string s)
{
	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
		}
	}
	return count;
}

//Ð¡Ð´×ÖÄ¸
int loLetter(string s)
{
	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			count++;
		}
	}
	return count;
}

//´óÐ´×ÖÄ¸
int caLetter(string s)
{
	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			count++;
		}
	}
	return count;
}

//·ûºÅ
int Symbol(string s)
{
	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if ( (s[i]< '0' || s[i] >'9') && (s[i] <'a' || s[i] >'z') && (s[i] <'A' || s[i] > 'Z'))
		{
			count++;
		}
	}
	return count;
}

int SafelevelGetPwdSecurityLevel(string pPasswordStr)
{
	int len = pPasswordStr.size();
	int sum = 0;
	if (len <= 4)
	{
		sum = 5;
	}
	else if (len >= 5 && len <= 7)
	{
		sum = 10;
	}
	else
	{
		sum = 25;
	}
	if (caLetter(pPasswordStr) > 0 && loLetter(pPasswordStr) > 0)
	{
		sum += 20;
	}
	else if (caLetter(pPasswordStr) == 0 && loLetter(pPasswordStr) > 0||
		caLetter(pPasswordStr) > 0 && loLetter(pPasswordStr) == 0)
	{
		sum += 10;
	}
	else
	{
		sum += 0;
	}

	if (Number(pPasswordStr) == 0)
	{
		sum += 0;
	}
	else if (Number(pPasswordStr) == 1)
	{
		sum += 10;
	}
	else
	{
		sum += 20;
	}

	if (Symbol(pPasswordStr) == 0)
	{
		sum += 0;
	}
	else if (Symbol(pPasswordStr) == 1)
	{
		sum += 10;
	}
	else
	{
		sum += 25;
	}

	if (Number(pPasswordStr) > 0 && (caLetter(pPasswordStr) > 0 || loLetter(pPasswordStr) > 0))
	{
		if (Number(pPasswordStr) > 0 &&
			caLetter(pPasswordStr) > 0 &&
			loLetter(pPasswordStr) > 0 &&
			Symbol(pPasswordStr) > 0)
		{
			sum += 5;
		}
		else if (Number(pPasswordStr) > 0 &&
			(caLetter(pPasswordStr) > 0 || loLetter(pPasswordStr) > 0) &&
			Symbol(pPasswordStr) > 0)
		{
			sum += 3;
		}
		else
		{
			sum += 2;
		}
	}
	return sum;
}

int main()
{
	string s;
	getline(cin, s);

	int ret = SafelevelGetPwdSecurityLevel(s);

	switch (ret/10)
	{
	case 5:
		cout << "AVERAGE" << endl;
		break;
	case 6:
		cout << "STRONG" << endl;
		break;
	case 7:
		cout << "VERY_STRONG" << endl;
		break;
	case 8:
		cout << "SECURE" << endl;
		break;
	case 9:
		cout << "VERY_SECURE" << endl;
		break;
		default:
		{
			if (ret >= 25)
			{
				cout << "WEAK" << endl;
			}
			else
			{
				cout << "VERY_WEAK" << endl;
			}
			break;
		}
	}

	system("pause");
	return 0;
}