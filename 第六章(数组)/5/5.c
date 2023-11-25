#include<stdio.h>
int main()
{
	int a[7] = { 9,8,6,5,4,2,1 };
	int i, j = 0;
	int t;
	for (i = 0, j = 6;; i++, j--)
	{
		if (j <= i)
			break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	for (i = 0; i < 7; i++)
		printf("%d ", a[i]);
	return 0;
}