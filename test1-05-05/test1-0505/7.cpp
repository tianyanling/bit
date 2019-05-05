//设圆半径是r=1.5,圆柱高h=3,求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float r, h;
	float pi = 3.1415026;
	float c, s1, s2, v1, v2;		//c表示圆周长，s1表示圆面积，s2表示圆球表面积，v1表示圆球体积，v2表示圆柱体积
	printf("请输入圆半径r和圆柱高h\n");
	scanf("%f%f", &r, &h);
	c = 2 * pi*r;
	s1 = pi*r*r;
	s2 = 4 * pi*r*r;
	v1 = (4.0 * pi*pow(r, 3)) / 3.0;
	v2 = s1*h;
	printf("圆周长:c =%6.2f\n",c);
	printf("圆面积:s1 = %6.2f\n", s1);
	printf("圆球表面积:s2 = %6.2f\n", s2);
	printf("圆球体积:v1 = %6.2f\n",v1);
	printf("圆柱体积:v2 = %6.2f\n", v2);
	system("pause");
	return 0;
}