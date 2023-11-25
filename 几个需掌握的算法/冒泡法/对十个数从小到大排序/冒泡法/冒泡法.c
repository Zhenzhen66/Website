#include<stdio.h>
int main()
{
	int a[10];
	int i, j, b;
	printf("请输入十个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
	for (i = 0; i < 10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}