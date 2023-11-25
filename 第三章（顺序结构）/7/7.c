#include<stdio.h>
#include<math.h>
int main()
{
	float r, h;//定义半径和圆柱高
	scanf_s("%f %f", &r, &h);
	double c, s, s1, v1, v2;//分别定义圆的周长，面积，圆球的表面积，体积，圆柱体积
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;
	s1 = 4 * 3.14 * r * r;
	v1 = 4 / 3 * 3.14 * pow(r, 3);
	v2 = 3.14 * pow(r, 2) * h;
	printf("圆的周长和面积分别是%.2f和%.2f\12", c, s);
	printf("圆球的表面积和体积分别是%.2f和%.2f\12", s1, v1);
	printf("圆柱的体积是%.2f", v2);
	return 0;
}