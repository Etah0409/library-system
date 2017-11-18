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
	char password[6];
}wardenType;/*����Ա��½��������*/

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
}bookType;/*ͼ����Ϣ������ ���� ժҪ �������� ����*/

FILE *fp;


int Log(char name[],char password[]);
void Borrow(void);
void Return(void);
void AddReader(void);
void SearchData(void);
void DeleteData(void);
void BookData(void);


#endif
