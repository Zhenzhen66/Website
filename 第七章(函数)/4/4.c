#include<stdio.h>
int main()
{
	void s(int arr[3][3]);
	int i, j = 0;
	int q[3][3] = { {11,22,33}, {44,55,66} ,{77,88,99} };
	s(q);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", q[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void s(int arr[3][3])
{
	int a, b, c = 0;
	for(a=0;a<3;a++)
		for (b = a+1; b < 3; b++)
		{
			c = arr[a][b];
			arr[a][b] = arr[b][a];
			arr[b][a] = c;
		}
}