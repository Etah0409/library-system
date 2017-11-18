/*文件名：_library_system_alg.h*/
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

}ReaderType;/*用户信息： 姓名 学号 学院 密码*/

typedef struct
{
	char name[20];
	char password[6];
}wardenType;/*管理员登陆名和密码*/

typedef struct
{
	int year;
	int month;
	int day;
}DateType;/*年月日*/

typedef struct
{
	char name[20];
	char remark[300];
	DateType RemarkDate;
}
RemarkType;/*图书评论*/

typedef struct
{
	char name[20];
	char author[20];
    char digest[150];
    DateType publication;
	char type[20];
    RemarkType book;
}bookType;/*图书信息：书名 作者 摘要 出版日期 领域*/

FILE *fp;


int Log(char name[],char password[]);
void Borrow(void);
void Return(void);
void AddReader(void);
void SearchData(void);
void DeleteData(void);
void BookData(void);


#endif
