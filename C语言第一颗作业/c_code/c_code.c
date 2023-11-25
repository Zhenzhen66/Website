#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//定义结构体数组
struct student
{
	int num;
	int ID;
	char name[10];
	char sex[10];
	char clas[30];
	int score1;
	int score2;
	int score3;
	int average;
};
//定义读取文件函数和写入文件函数
void read_and_save(char filename, struct student* stu);
void write_data(char filename, struct student* stu);
void read_and_save(char filename[], struct student* stu)
{
	FILE* fp;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Failed　to　open　file!\n");
		exit(-1); 
	}
	char first_row[100];//存储第一行
	fgets(first_row, 100, fp);
	int i = 0, j = 0, n = 1, m = 0;

	char point[20];//储存一项数据
	char line[100];//储存一行数据
	while ((fgets(line, 100, fp)) != NULL)//读取一行数据
	{
		j = 0;
		memset(point, 0, sizeof(point));//数组初始化
		for (i = 0; i < 100; i++)
		{
			if (line[i] == ',' || line[i] == '\n')
			{
				switch (n)
				{
				case 1:stu[m].num = atoi(point);  break;
				case 2:stu[m].ID = atoi(point);  break;
				case 3:strcpy(stu[m].name, point); break;
				case 4:strcpy(stu[m].sex, point); break;
				case 5:strcpy(stu[m].clas, point); break;
				case 6:stu[m].score1 = atoi(point); break;
				case 7:stu[m].score2 = atoi(point); break;
				case 8: {
					stu[m].score3 = atoi(point);
					stu[m].average = (stu[m].score1 + stu[m].score2 + stu[m].score3) / 3;
					break;
				}
				}
				j = 0;
				n++;
				memset(point, 0, sizeof(point));
				if (line[i] == '\n') { break; }
			}
			else
			{
				point[j] =line[i];
				j++;
			}
		}
		m++;
		n = 1;
	}
	fclose(fp);
}
void write_data(char filename[], struct student* stu)
{
	//创建一个文件
	FILE* fp;
	fp = fopen(filename, "w");
	if (fp == NULL)  
	{
		printf("Failed　to　open　file!\n");
		exit(-1);
	}

	fputs("序号,学号,姓名,性别,行政班,进制转换,多进制转换,数值表达逻辑代数,平均成绩\n", fp);
	for (int i = 0; stu[i].num > 0; i++)
		fprintf(fp, "%d,%d,%s,%s,%s,%d,%d,%d,%d\n", stu[i].num, stu[i].ID, stu[i].name, stu[i].sex, stu[i].clas, stu[i].score1, stu[i].score2, stu[i].score3, stu[i].average);

	fclose(fp);
}

int main()
{
	struct student stu1[170], stu2[170], stu3[170], * P1, * P2, * P3;
	P1 = stu1;
	P2 = stu2;
	P3 = stu3;
	char txt0[20], txt1[20], txt2[20], txt3[20], txt4[20], txt5[20];
	strcpy(txt0, "598854课程.txt");
	strcpy(txt1, "（新）598854课程.txt");
	strcpy(txt2, "598856课程.txt");
	strcpy(txt3, "（新）598856课程.txt");
	strcpy(txt4, "598858课程.txt");
	strcpy(txt5, "（新）598858课程.txt");
	read_and_save(txt0, P1);
	write_data(txt1, P1);
	read_and_save(txt2, P2);
	write_data(txt3, P2);
	read_and_save(txt4, P3);
	write_data(txt5, P3);

	return 0;
}
