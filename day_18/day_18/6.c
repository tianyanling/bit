//6.ʵ��memcpy 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

void *my_memcpy(void *dst, const void *src, size_t count)
{
	assert((dst != NULL) && (src != NULL));
	int wordnum = count / 4;//�����ж��ٸ�32λ����4�ֽڿ���
	int slice = count % 4;//ʣ��İ��ֽڿ���
	int * pintsrc = (int *)src;
	int * pintdst = (int *)dst;
	while (wordnum--)*pintdst++ = *pintsrc++;
	while (slice--)*((char *)pintdst++) = *((char *)pintsrc++);
	return dst;
}
int main6()
{
	char a[20] = "abshdjbhcde";
	char *p = "123";
	char *cpy = my_memcpy(a, p,3);
	printf("%s\n", cpy);
	system("pause");
	return 0;
}