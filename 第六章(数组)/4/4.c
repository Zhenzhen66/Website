#include<stdio.h>
int main()
{
	int a[6] = { 3,4,6,8,11 };
	int i, x, m;
	printf("请输入一个数\n");
	scanf_s("%d", &m);
	for (i = 0; i < 6; i++)
	{
		if (m < a[i])
		{
			x = m;
			m = a[i];
			a[i] = x;
		}
	else if (m > a[4])
			a[5]=m;
	}
	printf("新的排序:\n");
	for (i = 0; i < 6; i++)
		printf("%d ", a[i]);
	return 0;
}