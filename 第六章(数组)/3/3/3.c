#include<stdio.h>
int main()
{
	int sum1=0;
	int sum2=0; 
	int sum,m;
	int i,j=0;
	int a[][3] = { {23,14,16},{32,15,27},{26,27,17} };
	m = a[1][1];
	for (i=0; i <= 2; i++)
		sum1=sum1+a[i][i];
	for (i=0,j=2; j>=0; i++,j--)
		sum2=sum2+a[i][j];
	sum = sum1 + sum2-m;
	printf("ºÍÎª%d", sum);
	return 0;
}