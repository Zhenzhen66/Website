#include<stdio.h>
#include<math.h>
int main()
{
	float r, h;//����뾶��Բ����
	scanf_s("%f %f", &r, &h);
	double c, s, s1, v1, v2;//�ֱ���Բ���ܳ��������Բ��ı�����������Բ�����
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;
	s1 = 4 * 3.14 * r * r;
	v1 = 4 / 3 * 3.14 * pow(r, 3);
	v2 = 3.14 * pow(r, 2) * h;
	printf("Բ���ܳ�������ֱ���%.2f��%.2f\12", c, s);
	printf("Բ��ı����������ֱ���%.2f��%.2f\12", s1, v1);
	printf("Բ���������%.2f", v2);
	return 0;
}