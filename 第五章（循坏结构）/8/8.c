#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c;
	printf("ˮ�ɻ����У�");
	for (x = 100; x < 999; x++)
	{
		a = x % 10;           //��λ
		b = (x / 10) % 10;    //ʮλ
		c = x / 100;           //��λ
		if (x == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%d ", x);
	}
	return 0;
}
