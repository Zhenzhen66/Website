#include<stdio.h>
int main()
{
	float p(int n, int x);
	int a,b;
	float c;
	scanf_s("%d %d", &a, &b);
	c=p(a, b);
	printf("n=%d x=%d\n", a, b);
	printf("%f", c);//输出多项式值
	return 0;
}
float p(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else 
		return((2*n - 1) * x - p(n - 1, x) * x - (n - 1) * p(n - 2, x))/n;
}