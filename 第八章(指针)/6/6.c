#include<stdio.h>
int main()
{
	int length(char* p);
	char str[15];
	int x;
	gets(str);
	x = length(str);
	printf("³¤¶ÈÎª%d", x);
	return 0;
}
int length(char* p)
{
	int n=0;
	for (; *p != '\0'; p++)
		n++;
	return n;
}