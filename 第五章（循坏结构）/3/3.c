#include<stdio.h>
int f1(int x, int y)
{
	int t, r;
	if (x < y)
	{
		t = y;
		y = x;
		x = t;
	}
	r = x % y;
	while (r)
	{
		x = y;
		y = r;
		r = x % y;
		if (r == 0)
			break;
	}
	return y;
}//定义最大公约数函数
int main()
{
	int a, b,c,d;
	scanf_s("%d %d",&a,&b);
	c = f1(a, b);
	d = (a * b) / c;
	printf("最大公约数是%d\n", c);
	printf("最小公倍数是%d", d);
	return 0;
}