#include<stdio.h>
int f1(int x, int y)
{
	int t, r;
	if (x < y)
	{
		t = y;
		y = x;
		x = t;
	}
	r = x % y;
	while (r)
	{
		x = y;
		y = r;
		r = x % y;
		if (r == 0)
			break;
	}
	return y;
}//�������Լ������
int main()
{
	int a, b,c,d;
	scanf_s("%d %d",&a,&b);
	c = f1(a, b);
	d = (a * b) / c;
	printf("���Լ����%d\n", c);
	printf("��С��������%d", d);
	return 0;
}