/*�ļ�����_library_system_alg.h*/
#ifndef _LIBRARY_SYSTEM_ALG_H
#define _LIBRARY_SYSTEM_ALG_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define NUM 20

typedef struct
{
	char name[20];
	char num[15];
	char academy[20];
	char password[10];

}ReaderType;/*�û���Ϣ�� ���� ѧ�� ѧԺ ����*/

typedef struct
{
	char name[20];
	char password[10];
}WardenType;/*����Ա��½��������*/

typedef struct
{
	int year;
	int month;
	int day;
}DateType;/*������*/

typedef struct
{
	char name[20];
	char remark[300];
	DateType RemarkDate;
}
RemarkType;/*ͼ������*/

typedef struct
{
	char name[20];
	char author[20];
    char digest[150];
    DateType publication;
	char type[20];
    RemarkType book;
}BookType;/*ͼ����Ϣ������ ���� ժҪ �������� ����*/

FILE *fp;


int LoginReader(void);
int LoginWarden(void);
void Borrow(void);
void Return(void);
void AddReader(void);
void UpdateReader(void);
void SearchReader(void);
void DeleteData(void);
void BookData(void);
void Error(void)
{
	printf("��������밴����ʾ�������룡\n");
}


#endif
