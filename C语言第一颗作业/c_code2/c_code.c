#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
// file_eof.c --��һ���ļ�����ʾ���ļ�
#include<stdio.h>
#include<string.h>
#include<stdlib.h>// Ϊ��ʹ��exit()
//����ṹ������
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
//�����Ӻ���
void read_and_save(char filename, struct student* stu);
//��ȡ�ļ���������������

int main()
{
	struct student stu1[170], stu2[170], stu3[170], * P1, * P2, * P3;
	P1 = stu1;
	P2 = stu2;
	P3 = stu3;
	char txt0[20], txt1[20], txt2[20], txt3[20], txt4[20], txt5[20];
	strcpy(txt1, "���£�598854�γ�.txt");
	strcpy(txt3, "���£�598856�γ�.txt");
	strcpy(txt5, "���£�598858�γ�.txt");
	//��ȡ������д��������
	read_and_save(txt1, P1);
	read_and_save(txt3, P2);
	read_and_save(txt5, P3);
	int n;//ѡ���ж�
	int stu_num;//����ѧ��
	char stu_name[10];//��������
	printf("��ӭʹ�óɼ��ɼ���ѯϵͳ��\n");
	do {
		n = 0;
		stu_num = 0;
		printf("1-������ѯ��2-ѧ�Ų�ѯ ");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("������Ҫ��ѯ��ѧ��������\n");
			scanf("%s", stu_name);
			printf("��ѯ������£�\n");
			printf("ѧ��\t\t����\t�༶\t\t����ת��\t�����ת��\t��ֵ����߼�����\tƽ���ɼ�\n");
			for (int i = 0; i < 170; i++)
			{
				if (strcmp(stu_name, stu1[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu1[i].ID, stu1[i].name, stu1[i].clas, stu1[i].score1, stu1[i].score2, stu1[i].score3, stu1[i].average); }
				if (strcmp(stu_name, stu2[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu2[i].ID, stu2[i].name, stu2[i].clas, stu2[i].score1, stu2[i].score2, stu2[i].score3, stu2[i].average); }
				if (strcmp(stu_name, stu3[i].name) == 0) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu3[i].ID, stu3[i].name, stu3[i].clas, stu3[i].score1, stu3[i].score2, stu3[i].score3, stu3[i].average); }
			}
		}
		else
		{
			printf("������Ҫ��ѯ��ѧ��ѧ�ţ�\n");
			scanf("%d", &stu_num);
			printf("��ѯ������£�\n");
			printf("ѧ��\t\t����\t�༶\t\t����ת��\t�����ת��\t��ֵ����߼�����\tƽ���ɼ�\n");
			for (int i = 0; i < 170; i++)
			{
				if (stu_num == stu1[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu1[i].ID, stu1[i].name, stu1[i].clas, stu1[i].score1, stu1[i].score2, stu1[i].score3, stu1[i].average); }
				if (stu_num == stu2[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu2[i].ID, stu2[i].name, stu2[i].clas, stu2[i].score1, stu2[i].score2, stu2[i].score3, stu2[i].average); }
				if (stu_num == stu3[i].ID) { printf("%d\t%s\t%s\t%d\t\t%d\t\t%d\t\t\t%d\n", stu3[i].ID, stu3[i].name, stu3[i].clas, stu3[i].score1, stu3[i].score2, stu3[i].score3, stu3[i].average); }
			}
		}
		printf("0-������ѯ��1-������ѯ ");
		scanf("%d", &n);
	} while (n != 0);
	exit(1);
	return 0;
}

void read_and_save(char filename[], struct student* stu)
{
	FILE* fp;//�ļ�ָ��
	fp = fopen(filename, "r");	// �򿪴���ȡ�ļ�
	if (fp == NULL)// ���ʧ��
	{
		printf("Failed��to��open��file!\n");
		exit(1); // �˳�����
	}
	char first_row[100];//�洢��һ��
	fgets(first_row, 100, fp);
	int i = 0, j = 0, n = 1, m = 0;

	char point[20];//����һ������
	char test[100];//����һ������
	while ((fgets(test, 100, fp)) != NULL)//��ȡһ������
	{
		j = 0;
		memset(point, 0, sizeof(point));//�����ʼ��
		for (i = 0; i < 100; i++)//��ȡһ�����ݣ���','�ָ�
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

