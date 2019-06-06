#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct Node
{
	int data;
	struct Node*lchild, *rchild;
}NodeType;

typedef struct
{
	int num;
}datatype;

typedef struct
{
	datatype *data;
	int length;
}S_TBL;

int SearchData(NodeType *T, NodeType **p, NodeType **q, int kx)
{
	int flag = 0;
	*q = T;
	while (*q)
	{
		if (kx > (*q)->data)
		{
			*p = *q;
			*q = (*q)->rchild;
		}
		else
		{
			if (kx < (*q)->data)
			{
				*p = *q;
				*q = (*q)->lchild;
			}
			else
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}

int InsertNode(NodeType **T, int kx)
{
	int flag = 0;
	NodeType *p = *T, *q, *s;
	if (!SearchData(*T, &p, &q, kx))
	{
		s = (NodeType*)malloc(sizeof(NodeType));
		s->data = kx;
		s->lchild = NULL;
		s->rchild = NULL;
		if (p == NULL)
		{
			*T = s;
		}
		else
		{
			if (kx > p->data)
			{
				p->rchild = s;
			}
			else
			{
				p->lchild = s;
			}
		}
		flag = 1;
	}
	return flag;
}

int DeleteNode(NodeType**T, int kx)
{
	int flag = 0;
	NodeType *p = *T, *q, *s, **f;
	if (SearchData(*T, &p, &q, kx))
	{
		if (p == q)
		{
			f = T;
		}
		else
		{
			f = &(p->lchild);
			if (kx > p->data)
			{
				f = &(p->rchild);
			}
		}
		if (q->rchild == NULL)
		{
			*f = q->lchild;
		}
		else
		{
			if (q->lchild == NULL)
			{
				*f = q->rchild;
			}
			else
			{
				if (q->lchild == NULL)
				{
					*f = q->rchild;
				}
				else
				{
					p = q->rchild;
					s = p;
					while (p->lchild)
					{
						s = p;
						p = p->lchild;
					}
					*f = p;
					p->lchild = q->lchild;
					if (s != p)
					{
						s->lchild = p->rchild;
						p->rchild = q->rchild;
					}
				}
			}
		}
		free(q);
		flag = 1;
	}
	return flag;
}

void InOrder(NodeType *bt)
{
	if (bt == NULL)
	{
		return;
	}
	InOrder(bt->lchild);
	printf("\t%5d", bt->data);
	InOrder(bt->rchild);
}

int Binary_Search(S_TBL *tbl, int kx)
{
	int flag = 1;
	int low = 1;
	int high = tbl->length;
	int mid = 0;
	while (low <= high)
	{
		mid=(low + high) / 2;
		if (kx < tbl->data[mid].num)
		{
			high = mid - 1;
		}
		else if (kx > tbl->data[mid].num)
		{
			low = mid + 1;
		}
		else
		{
			flag = mid+1;
			break;
		}
	}
	return flag;
}

void menu()
{
	printf("***************************************************************************\n");
	printf("                   1.用折半查找法查找一个已知关键字\n");
	printf("                   2.随机产生一组关键字，建立二叉排序树\n");
	printf("                   3.删除指定关键元素\n");
	printf("***************************************************************************\n");
	printf("请选择需要的选项：\n");
}

int main()
{
	int n, m = 1;
	NodeType *T = NULL;
	while (m)
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			int i, flag;
			int kx;
			S_TBL *tbl = (S_TBL *)malloc(sizeof(S_TBL));
			printf("关键字长度m=");
			scanf("%d", &tbl->length);
			tbl->data = (datatype*)calloc(tbl->length, sizeof(datatype));
			printf("\n");
			printf("输入元素：");
			for (i = 0; i < tbl->length; i++)
				{
					scanf("%d", &((tbl->data[i]).num));
				}
				printf("\n");
				printf("输入要查找的数：");
				scanf("%d", &kx);
				flag = Binary_Search(tbl, kx);
				if (flag == 0)
				{
					printf("查找错误\n");
				}
				else
				{
					printf("该关键字序号为%6d\n", flag);
				}
				break;
			}
			case 2:
			{
				int flag;
				int kx;
				printf("请输入一组数据（以000结尾）：");
				scanf("%d", &kx);
				while (kx != 000)
				{
					flag = InsertNode(&T, kx);
					if (flag == 0)
					{
						printf("插入失败\n");
						break;
					}
					scanf("%d", &kx);
				}
				printf("二叉排序树为：\n");
				{
					InOrder(T);
					printf("\n");
					break;
				}
			}
			case 3:
			{
				int flag;
				int kx;
				printf("请输入要删除的关键字元素：");
				scanf("%d", &kx);
				flag = DeleteNode(&T, kx);
				if (flag == 0)
				{
					printf("删除失败\n");
				}
				else
				{
					printf("删除成功\n");
				}
				printf("删除关键字元素后二叉排序树为：\n");
				{
					InOrder(T);
					printf("\n");
					break;
				}
			}
			default:
			{
				printf("输入错误，请重新输入！\n");
				break;
			}
		}
	}
	system("pause");
	return 0;
}