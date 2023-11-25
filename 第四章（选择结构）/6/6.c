#include<stdio.h>
int main()
{
	double y;
	double x;
	scanf_s("%lf", &x);
	if (x < 1)
		y = x;
	else
		if (x >= 1 && x < 10)
			y = 2 * x - 1;
		else
			y = 3 * x - 11;
	printf("y=%f", y);
	return 0;
}