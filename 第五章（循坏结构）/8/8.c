#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c;
	printf("水仙花数有：");
	for (x = 100; x < 999; x++)
	{
		a = x % 10;           //个位
		b = (x / 10) % 10;    //十位
		c = x / 100;           //百位
		if (x == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%d ", x);
	}
	return 0;
}
