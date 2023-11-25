#include<stdio.h>
int main()
{
	char ch(int n);
	int x;
	printf("请输入一个四位数:\n");
	scanf_s("%d", &x);
	if (x / 1000 < 1 || x / 1000 > 9)
		printf("输入错误,请再次输入.");
	printf("%c", ch(x));
}
char ch(int n)
{
	int a, b, c, d;
	char e;
	a = n/1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	e = printf("%d %d %d %d", a, b, c, d);
	return e;
}