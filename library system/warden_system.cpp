/*�ļ�����warden_system.cpp*/
/*���ļ�Ϊ����Ա����Ҫ�ĺ���*/

/*#include "_library_system_alg.h"

void AddReader(void)//���������û��ĺ���
{
ReaderType reader;
int i=1;
if((fp=fopen("ReaderData","rb+"))==NULL)
{
  exit(0);
		
}
 do
 {
  printf("ѧ�ţ�");
     scanf("%s",reader.name);
  printf("������");
     scanf("%s",reader.num);
  printf("ѧԺ��");
     scanf("%s",reader.academy);
  printf("���룺");
     scanf("%s",reader.password);
  fseek(fp,0,SEEK_END);
  fwrite(&reader,sizeof(ReaderType),1,fp);
  printf("����1���������û������������˳���\n");
  scanf("%d",&i);
}while(i==1);
 fclose(fp);
}

void SearchReader(void)/*��ѯ�û��ĺ���*/
/*{  int i=1; char num[20];
    ReaderType reader;
  do{

   printf("��Ҫ��ѯ���û�ѧ���ǣ�");
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
	   printf("����   ѧ��         ѧԺ       ��¼����\n");
	   printf("%s% 10s %10s %8s\n",reader.name,reader.num,reader.academy,reader.password);
   }
   else
   {
	   printf("�޴�ѧ�Ŷ���\n");
   }


   printf("�Ƿ���Ҫ������ѯ����������1�����������˳���"); scanf("%d",&i);
  }while(i==1);
  fclose(fp);
}

void DeleteReader(void)//ɾ���û����õĺ���//
{
	ReaderType reader;int i=1;
	do{
	char num[20];
	printf("������Ҫɾ�����û�ѧ�ţ�");
	scanf("%s",num);
	rewind(fp);
	fread(&reader,sizeof(ReaderType),1,fp);
		while(!feof(fp))
		{
			if(strcmp(reader.num,num)==0) break;
		}
		if(!feof(fp))
		{
			printf("��ɾ����¼Ϊ��");
			printf("ѧ��    ����   ѧԺ  ����");
			   printf("%12s%12s%12s%12s\n",reader.num,reader.name,reader.academy,reader.password);
			fseek(fp,sizeof(ReaderType),SEEK_CUR);
			fwrite(&reader,sizeof(ReaderType),1,fp);
		}
		else
		{
			printf("�޴�ѧ���û�\n");

		}
		printf(" �Ƿ���Ҫ����ɾ������������1�����������˳���");  scanf("%d",&i);
	}while(i==1);

}

void UpdateReader(void)//�����û��������õĺ���//
{
	ReaderType reader;
    char num[15]; int i;
	do{
	printf("������Ҫ���ĵ��û���ѧ��:");
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
		printf("ѧ��       ����   ѧԺ ����\n");
		printf("%12s%12s%12s%12s\n",reader.num,reader.name,reader.academy,reader.password);
		printf("��������º�����ݣ�\n");
		 printf("ѧ�ţ�");
           scanf("%s",reader.name);
         printf("������");
           scanf("%s",reader.num);
         printf("ѧԺ��");
           scanf("%s",reader.academy);
         printf("���룺");
     	 scanf("%s",reader.password);
		 fseek(fp,sizeof(ReaderType),SEEK_CUR);
		 fwrite(&reader,sizeof(reader),1,fp);

	}
	else
	{
		printf("�޴˱���û�\n");
			rewind(fp);
	}
			printf(" �Ƿ���Ҫ�������ģ���������1�����������˳���");  scanf("%d",&i);
	}while(i==1);
}*/