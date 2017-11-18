/*文件名：system_main_alg.c*/
#include "_library_system_alg.h"

FILE *fp;

int main()
{   ReaderType reader;
	int n;
	printf("欢迎登陆图书管理系统，请选择登陆类型：管理员登录请按1,读者登录请按2，回车结束\n");

    scanf("%d",&n);
	while(n!=1&&n!=2)
	{
       printf("输入错误，请输入1或2\n");
	   scanf("%d",&n);
	}
	    if(n==1) {
		}
           else if(n==2)
		   {
              return 0;
		   }

  
	return 0;
}
