#include<stdio.h>
int main()
{
	void a(int n);
	int x;
	scanf_s("%d",&x);
	a(x);
	return 0;
}
void a(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d不是素数\n", n);
			break;
		}
	}
	if (n % 2 != 0)
		printf("%d是素数\n", n);
}