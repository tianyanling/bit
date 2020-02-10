//扑克牌排序
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Poker
{
	char type;
	int point;
};

enum
{
	SPADES,//黑桃
	HEARTS,//红桃
	CLUBS,//梅花
	DIAMONDS,//方片
	JOKER//王
};

//输入系统
void inputPoker(Poker * pk)
{
	scanf("%c%d", &pk->type, &pk->point);
	pk->type -= 'a';
	if (pk->type == JOKER)
	{
		pk->point += 13;//保证大小王是最大的
	}
	while (getchar() != '\n');
}

void outputPoker(Poker k)
{
	char *type[5] = { "黑桃","红桃","梅花","方片" ,""};
	char *point[16] = { "","A","2","3","4","5","6","7","8","9","10","J","Q","K","小王","大王" };

	printf("%s%s", type[k.type], point[k.point]);
	puts("");
}

bool cmpPoker(Poker a, Poker b)
{
	return (a.point < b.point) || (a.point == b.point && a.type < b.type);
}

void InsertSort(Poker *src, int n, bool(*cmp)(Poker, Poker) = cmpPoker)
{
	int i, j;
	Poker tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];

		for (j = i; j > 0 && cmp(tmp, src[j - 1]); j--)//对cmp回调
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

bool cmplulaoye(Poker a, Poker b)
{
	if (a.point <= 2)
	{
		a.point += 11;
	}
	else if(a.point<=13)
	{
		a.point -= 2;
	}

	if (b.point <= 2)
	{
		b.point += 11;
	}
	else if (b.point <= 13)
	{
		b.point -= 2;
	}
	return (a.point < b.point) || (a.point == b.point && a.type < b.type);
}


int main()
{
	/*Poker p;
	while (1)
	{
		inputPoker(&p);
		
		outputPoker(p);
	}*/
	Poker p[5];

	int i;
	for (i = 0; i < 5; i++)
	{
		inputPoker(p + i);
	}

	InsertSort(p, 5, cmplulaoye);

	for (auto i : p)
	{
		outputPoker(i);
	}
	system("pause");
	return 0;
}