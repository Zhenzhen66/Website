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
	printf("���Լ��Ϊ%d:\n", z);
	printf("��С������Ϊ:%d", x);
	return 0;
}
int a(int x, int y)//�������Լ��
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
int b(int m,int n)//������С������
{
	int a(int x, int y);
	int q;
	int c;
	c= a(m,n);
	q = m * n / c;
}