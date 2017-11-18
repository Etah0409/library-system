/*文件名：login.cpp*/
/*此文件为登录所需要的函数*/
#include "_library_system_alg.h"

int LoginReader(void)
{
    char  name[20],password[15];ReaderType reader;
	printf("请输入用户名：");
	scanf("%s",name);
	printf("请输入密码：");
	scanf("%s",password);
	if((fp=fopen("ReaderData","rb"))==NULL)
	{
		printf("error\n");
		exit(0);
	}
    fread(&reader,sizeof(ReaderType),1,fp);
		if(strcmp(reader.name,name)==0&&strcmp(reader.password,password)==0)
			return 1;
		else 
		{   printf("输入错误,请重新输入\n");
			return 0;}
}



int LoginWarden(void)
{
    char  name[20],password[15]; WardenType warden;
		printf("请输入用户名：");
     	scanf("%s",name);
     	printf("请输入密码：");
    	scanf("%s",password);
		if((fp=fopen("D:\\library system\\wardendata.dat","rb+"))==NULL)
		{
		     printf("error\n");
		     exit(0);
		}
		while(!feof(fp))
{
		fread(&warden,sizeof(WardenType),1,fp);
         if(strcmp(warden.name,name)==0&&strcmp(warden.password,password)==0)
		 break;}
		 if(!feof(fp)) 
			return 1;
		else 
		{   printf("输入错误,请重新输入\n");
			return 0;}
		

}