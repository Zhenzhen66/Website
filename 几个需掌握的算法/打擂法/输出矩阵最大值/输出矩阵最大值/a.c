#include<stdio.h>
int main()
{
	int max,row,column;
	int i, j = 0;
	int a[][4] = { {22,17,24,35},{29,34,22,26},{32,15,36,33} };
	max = a[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] >max)
			{
				max = a[i][j];
				row = i+1;
				column = j+1;
			}
		}
	}
	printf("最大数为%d\n", max);
	printf("row=%d\ncolumn=%d", row, column);
	return 0;
}