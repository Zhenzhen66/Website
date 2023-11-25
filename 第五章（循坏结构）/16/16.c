#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line;
	scanf_s("%d", &line);
	int x, y;
	int m;
	for (x = 0; x < line; x++)
	{
		for (y = 0; y < line - 1 - x; y++)
		{
			printf(" ");
		}
		for (m = 0; m < 2 * x + 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (x = 0; x < line; x++)
	{
		for (y = 0; y <=x; y++)
		{
			printf(" ");
		}
		for (m = 0; m < 2 * (line-2-x)+1; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}