#include<stdio.h>
int main()
{
	int a(int x, int y);
	int b(int m, int n);
	int g, h;
	int z, x;
	scanf_s("%d %d", &g, &h);
	z = a(g, h);
	x = b(g, h);
	printf("最大公约数为%d:\n", z);
	printf("最小公倍数为:%d", x);
	return 0;
}
int a(int x, int y)//定义最大公约数
{
	int t,r;
	if (x < y)
	{
		t = x; x = y; y = t;
	}
	r=x%y;
	while (r!=0)
	{
		x = y;
		y = r;
		r = x % y;
	}
	return y;
}
int b(int m,int n)//定义最小公倍数
{
	int a(int x, int y);
	int q;
	int c;
	c= a(m,n);
	q = m * n / c;
}