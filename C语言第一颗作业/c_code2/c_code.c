#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
// file_eof.c --打开一个文件并显示该文件
#include<stdio.h>
#include<string.h>
#include<stdlib.h>// 为了使用exit()
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
//定义子函数
void read_and_save(char filename, struct student* stu);
//读取文件并储存在数组中

int main()
{
	struct student stu1[170], stu2[170], stu3[170], * P1, * P2, * P3;
	P1 = stu1;
	P2 = stu2;
	P3 = stu3;
	char txt0[20], txt1[20], txt2[20], txt3[20], txt4[20], txt5[20];
	strcpy(txt1, "（新）598854课程.txt");
	strcpy(txt3, "（新）598856课程.txt");
	strcpy(txt5, "（新）598858课程.txt");
	//提取数据与写入新数据
	read_and_save(txt1, P1);
	read_and_save(txt3, P2);
	read_and_save(txt5, P3);
	int n;//选择判断
	int stu_num;//储存学号
	char stu_name[10];//储存姓名
	printf("欢迎使用成绩成绩查询系统：\n");
	do {
		n = 0;
		stu_num = 0;
		printf("1-姓名查询，2-学号查询 ");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("请输入要查询的学生姓名：\n");
			scanf("%s", stu_name);
			printf("查询结果如下：\n");
			printf("学号\t\t姓名\t班级\t\t进制转换\t多进制转换\t数值表达逻辑代数\t平均成绩\n");
			for (int i = 0; i < 170; i++)
			{
				if (strcmp(stu_name, stu1[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu1[i].ID, stu1[i].name, stu1[i].clas, stu1[i].score1, stu1[i].score2, stu1[i].score3, stu1[i].average); }
				if (strcmp(stu_name, stu2[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu2[i].ID, stu2[i].name, stu2[i].clas, stu2[i].score1, stu2[i].score2, stu2[i].score3, stu2[i].average); }
				if (strcmp(stu_name, stu3[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu3[i].ID, stu3[i].name, stu3[i].clas, stu3[i].score1, stu3[i].score2, stu3[i].score3, stu3[i].average); }
			}
		}
		else
		{
			printf("请输入要查询的学生学号：\n");
			scanf("%d", &stu_num);
			printf("查询结果如下：\n");
			printf("学号\t\t姓名\t班级\t\t进制转换\t多进制转换\t数值表达逻辑代数\t平均成绩\n");
			for (int i = 0; i < 170; i++)
			{
				if (stu_num == stu1[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu1[i].ID, stu1[i].name, stu1[i].clas, stu1[i].score1, stu1[i].score2, stu1[i].score3, stu1[i].average); }
				if (stu_num == stu2[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu2[i].ID, stu2[i].name, stu2[i].clas, stu2[i].score1, stu2[i].score2, stu2[i].score3, stu2[i].average); }
				if (stu_num == stu3[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu3[i].ID, stu3[i].name, stu3[i].clas, stu3[i].score1, stu3[i].score2, stu3[i].score3, stu3[i].average); }
			}
		}
		printf("0-结束查询，1-继续查询 ");
		scanf("%d", &n);
	} while (n != 0);
	exit(1);
	return 0;
}

void read_and_save(char filename[], struct student* stu)
{
	FILE* fp;//文件指针
	fp = fopen(filename, "r");	// 打开待读取文件
	if (fp == NULL)// 如果失败
	{
		printf("Failed　to　open　file!\n");
		exit(1); // 退出程序
	}
	char first_row[100];//存储第一行
	fgets(first_row, 100, fp);
	int i = 0, j = 0, n = 1, m = 0;

	char point[20];//储存一项数据
	char test[100];//储存一行数据
	while ((fgets(test, 100, fp)) != NULL)//读取一行数据
	{
		j = 0;
		memset(point, 0, sizeof(point));//数组初始化
		for (i = 0; i < 100; i++)//读取一项数据，以','分隔
		{
			if (test[i] == ',' || test[i] == '\n')
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
				case 8: stu[m].score3 = atoi(point); break;
				case 9:stu[m].average = atoi(point); break;
				}
				j = 0;
				n++;
				memset(point, 0, sizeof(point));
				if (test[i] == '\n') { break; }
			}
			else
			{
				point[j] = test[i];
				j++;
			}
		}
		m++;
		n = 1;
	}
	fclose(fp);
}

