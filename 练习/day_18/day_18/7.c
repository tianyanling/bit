//实现memmove
//功能：由src所指内存区域复制count个字节到dest所指内存区域。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dst, const void* src, size_t count)
{
	assert(NULL != src && NULL != dst);
	char* tmpdst = (char*)dst;
	char* tmpsrc = (char*)src;

	if (tmpdst <= tmpsrc || tmpdst >= tmpsrc + count)
	{
		while (count--)
		{
			*tmpdst++ = *tmpsrc++;
		}
	}
	else
	{
		tmpdst = tmpdst + count - 1;
		tmpsrc = tmpsrc + count - 1;
		while (count--)
		{
			*tmpdst-- = *tmpsrc--;
		}
	}
	return dst;
}

int main()
{
	printf("%s\n", my_memmove("ancd", "abcd",2));
	system("pause");
	return 0;
}