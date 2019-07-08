//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//#define EQ(a, b) ((a) == (b))              //对数值型关键字的宏定义 
//#define LT(a, b) ((a) < (b))
//#define LQ(a, b) ((a) >= (b))
//
//typedef int KeyType;
//typedef struct 
//{
//	KeyType *elem;
//	int length;
//}RecordList;
//
//int Create(RecordList L)
//{
//	L.elem = (KeyType *)malloc((L.length + 1) * sizeof(KeyType));
//	int i;
//	printf("请输入表元素：\n");
//	for (i = 1; i <= L.length; i++) {
//		scanf("%d", &L.elem[i]);
//	}
//	return 0;
//}
//
//int BinSrch(RecordList L, KeyType k )
//{
//	int low = 1;
//	int high = L.length;
//	int mid = 0;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (EQ(L.elem[mid],k))
//		{
//			return mid;
//		}
//		else if (LT(L.elem[mid],k))
//		{
//			high = mid - 1;
//		}
//		else
//		{
//			low = mid + 1;
//		}
//	}
//	return 0;
//}
//
//int GreastBST(RecordList  *bst)
//{
//	int ENDKEY;
//	KeyType key;
//	*bst = NULL;
//	scanf("%d", &key);
//	while (key != ENDKEY)
//	{
//		InsertBST(bst, key);
//		scanf("%d", &key);
//	}
//}
//
//void InsertBST(RecordList  *bst, KeyType key)
//{
//	RecordList s;
//	if ( * bst == NULL)
//	{
//		s.elem = (KeyType *)malloc((s.length + 1) * sizeof(KeyType));
//		s->key = key;
//		s->lchild = NULL;
//		s->rchild = NULL;
//		*bst = s;
//	}
//	else if (key < (*bst)->key)
//	{
//		InsertBST(&((*bst)->lchild), key);
//	}
//	else if (key < (*bst)->key)
//	{
//		InsertBST(&((*bst)->rchild), key);
//	}
//}
//
//
//int main()
//{
//
//}