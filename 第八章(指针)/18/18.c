#include<stdio.h>
int main()
{
	char* month_name[12] = { "January", "February", "March", "April", "May", "June",
	"July","Augest","Septemble","Octoble","Noverble","Decemble" };
	int n;
	printf("ÇëÊäÈëÔÂ·Ý:\n");
	scanf_s("%d", &n);
	if (n >= 1 || n <= 12)
		printf("%s\n", *(month_name + n - 1));
	else
		printf("erro");
	return 0;
}
