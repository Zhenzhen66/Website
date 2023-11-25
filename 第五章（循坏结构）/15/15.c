#include<stdio.h>
#include<math.h>
int main()
{
	float f(double x);
	double a, b, x0;
	scanf_s("%lf %lf", &a, &b);
	if (f(a) * f(b) < 0)
	{
		do
		{
			x0 = (a + b) / 2;
			if (f(a) * f(x0) < 0)
				b = x0;
			else
				a = x0;
		} while (fabs(a-x0) > 1e-6||fabs(b-x0)>1e-6);
		printf("方程的根约为%f", x0);
	}
	else
		printf("请重新输入");
	return 0;
}
float f(double x)
{
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}
