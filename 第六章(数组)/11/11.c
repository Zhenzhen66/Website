#include<stdio.h>
int main()
{
	int m,n;
	char a[5][9];
	int i = 0; int j;
    a[0][0] = '*';
	for(i=0;i<5;i++)
	{
		for (n = 0;n<i; n++)
		{
			a[i][n] = ' ';
			m = a[i][n];
			printf("%c", m);
		}
		for (j = i; j < i + 5; j++)
		{
			a[i][j] = '*';
			m = a[i][j];
			printf("%c", m);
		}
		printf("\n");
	}
	return 0;
}