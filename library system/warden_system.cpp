/*文件名：warden_system.cpp*/
/*此文件为管理员所需要的函数*/

/*#include "_library_system_alg.h"

void AddReader(void)//控制增加用户的函数
{
ReaderType reader;
int i=1;
if((fp=fopen("ReaderData","rb+"))==NULL)
{
  exit(0);
		
}
 do
 {
  printf("学号：");
     scanf("%s",reader.name);
  printf("姓名：");
     scanf("%s",reader.num);
  printf("学院：");
     scanf("%s",reader.academy);
  printf("密码：");
     scanf("%s",reader.password);
  fseek(fp,0,SEEK_END);
  fwrite(&reader,sizeof(ReaderType),1,fp);
  printf("输入1继续增加用户，输入其它退出！\n");
  scanf("%d",&i);
}while(i==1);
 fclose(fp);
}

void SearchReader(void)/*查询用户的函数*/
/*{  int i=1; char num[20];
    ReaderType reader;
  do{

   printf("需要查询的用户学号是：");
   scanf("%s",num);
   if((fp=fopen("ReaderData","rb"))==NULL)
   {
	   printf("error\n");
	   exit(0);
   }
   rewind(fp);
   fread(&reader,sizeof(ReaderType),1,fp);
   while(!feof(fp))
   {
	   if(strcmp(reader.num,num)==0)
		   break;
	   printf("*");
   }
   fread(&reader,sizeof(ReaderType),1,fp);
   if(!feof(fp))
   {
	   printf("姓名   学号         学院       登录密码\n");
	   printf("%s% 10s %10s %8s\n",reader.name,reader.num,reader.academy,reader.password);
   }
   else
   {
	   printf("无此学号读者\n");
   }


   printf("是否需要继续查询：是请输入1，输入其它退出！"); scanf("%d",&i);
  }while(i==1);
  fclose(fp);
}

void DeleteReader(void)//删除用户所用的函数//
{
	ReaderType reader;int i=1;
	do{
	char num[20];
	printf("请输入要删除的用户学号：");
	scanf("%s",num);
	rewind(fp);
	fread(&reader,sizeof(ReaderType),1,fp);
		while(!feof(fp))
		{
			if(strcmp(reader.num,num)==0) break;
		}
		if(!feof(fp))
		{
			printf("被删除记录为：");
			printf("学号    姓名   学院  密码");
			   printf("%12s%12s%12s%12s\n",reader.num,reader.name,reader.academy,reader.password);
			fseek(fp,sizeof(ReaderType),SEEK_CUR);
			fwrite(&reader,sizeof(ReaderType),1,fp);
		}
		else
		{
			printf("无此学号用户\n");

		}
		printf(" 是否需要继续删除：是请输入1，输入其它退出！");  scanf("%d",&i);
	}while(i==1);

}

void UpdateReader(void)//更改用户数据所用的函数//
{
	ReaderType reader;
    char num[15]; int i;
	do{
	printf("请输入要更改的用户的学号:");
    scanf("%s",num);
	rewind(fp);
	fread(&reader,sizeof(ReaderType),1,fp);
	while(!feof(fp))
	{
		if(strcmp(reader.num,num)==0)
			 break;
		fread(&reader,sizeof(ReaderType),1,fp);
	}
	if(!feof(fp))
	{
		printf("学号       姓名   学院 密码\n");
		printf("%12s%12s%12s%12s\n",reader.num,reader.name,reader.academy,reader.password);
		printf("请输入更新后的数据：\n");
		 printf("学号：");
           scanf("%s",reader.name);
         printf("姓名：");
           scanf("%s",reader.num);
         printf("学院：");
           scanf("%s",reader.academy);
         printf("密码：");
     	 scanf("%s",reader.password);
		 fseek(fp,sizeof(ReaderType),SEEK_CUR);
		 fwrite(&reader,sizeof(reader),1,fp);

	}
	else
	{
		printf("无此编号用户\n");
			rewind(fp);
	}
			printf(" 是否需要继续更改：是请输入1，输入其它退出！");  scanf("%d",&i);
	}while(i==1);
}*/