#include<stdio.h>
float max(float a,float b,float c)
{
	float d;
	if(a>b&&a>c)
	d=a;
	if(b>a&&b>c)
	d=b;
	if(c>a&&c>b)
	d=c;
	return(d);
}
int main()
{
	printf("请输入三个数\n");
	float max(float a,float b,float c); 
 float x,y,z,m;
	scanf("%f %f %f",x,y,z);
	m=max(x,y,z);
	printf("%f",m);
	return 0;
 } 
