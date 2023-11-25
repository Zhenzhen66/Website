#include<stdio.h>
int main()
{
	void input(int *num);
	void fun(int* num);
	void output(int* num);
	int num[10];
	input(num);
	fun(num);
	output(num);
	return 0;
}
void input(int* num)
{
	printf("请输入十个数:\n");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
}
void fun(int* num)
{
	int* max, * min, * p, a;
	min = num;
	max = num;
	p = num + 1;
	for (p; p < num + 10; p++)
		if (*p > *max)
			max = p;
		else if (*p < *min)
			min = p;
	a = num[0];
	num[0] = *min;
	*min = a;
	if (max == num)
		max = min;
	a = num[9]; num[9] = *max; *max = a;
}
void output(int* num)
{
	int* p;
	p = num;
	for (p; p < num + 10; p++)
		printf("%d ", *p);
}