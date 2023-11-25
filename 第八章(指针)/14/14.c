#include<stdio.h>
int main()
{
	void fun(int* p, int n);
	int i;
	int a[10];
	int* p;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	p= &a[0];
	fun(p, 10);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
void fun(int* p, int n)
{
	int i;
	int b,*p1,*p2;
	for (i = 0; i < n / 2; i++)
	{
		p1 = p + i;
		p2 = p + (n - 1 - i);
		b = *p1; *p1 = *p2; *p2 = b;
	}
}
