/*文件名：system_main_alg.c*/
#include "_library_system_alg.h"
#include "warden_system.cpp"
#include "Login.cpp"

FILE *fp;

int main()
{
	int n;
	printf("欢迎登陆图书管理系统，请选择登陆类型：\n\n管理员登录请按1,读者登录请按2，回车结束\n");

    scanf("%d",&n);
	while(n!=1&&n!=2)
	{
       Error();
	   scanf("%d",&n);
	}
        	  if(n==1)  {     	int j;
				 //True or false
				  do
				  {
					  LoginWarden();
				  }while(LoginWarden()==0);
				       
		                printf("管理员，您想进行的操作是：1.管理用户；2.管理图书；回车结束\n");
					
				           scanf("%d",&j);
					      while(j!=1&&j!=2)
						  {
							  Error();
							  scanf("%d",&j);
						  }
						  if(j==1) {  int k;
						                printf("您想进行的操作是：1.增加用户；2.删减用户；3.更改用户；4.查询用户；回车结束\n");
										    scanf("%d",&k);  
									/*	while(k!=1&&k!=2&&k!=3&&k!=4)
										  {
											  Error();
											  scanf("%d",&k);
										  }
								          switch(k)
										  {
										  case 1:AddReader();break;
										  case 2:DeleteReader();break;
										  case 3:UpdateReader();break;
										  case 4:SearchReader();break;
										  }*/
						  }
						  else if(j==2){
							             int k;
		                                printf("您想进行的操作是：1.增加图书信息；2.删减图书信息；3.更改图书信息；4.查询图书信息；回车结束\n");
			                                scanf("%d",&k);
			                            while(k!=1&&k!=2&&k!=3&&k!=4)
										{
					                       Error();
					                       scanf("%d",&k);
										}
				                        switch(k)
										{
				                         case 1: return 0;break;
			                             case 2: return 0;break;
			                             case 3: return 0;break;
			                             case 4: return 0;break;
										}
						  }
				  
			  }
           else if(n==2)
		   {
		       int j;
				 //True or false
				  do
				  {
					  LoginReader();
				  }while(LoginReader()==0);
		     
		       printf("您想进行的操作是：1.查询目前状态；2.借书；3.还书；4.查询所有图书信息");
			      scanf("%d",&j);
				while(j!=1&&j!=2&&j!=3&&j!=4)
				{
					Error();
					scanf("%d",&j);
				}
				switch(j)
				{
				case 1: return 0;break;
			    case 2: return 0;break;
			    case 3: return 0;break;
			    case 4: return 0;break;
				}
		   }

	return 0;
}