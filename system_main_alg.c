/*�ļ�����system_main_alg.c*/
#include "_library_system_alg.h"

FILE *fp;

int main()
{   ReaderType reader;
	int n;
	printf("��ӭ��½ͼ�����ϵͳ����ѡ���½���ͣ�����Ա��¼�밴1,���ߵ�¼�밴2���س�����\n");

    scanf("%d",&n);
	while(n!=1&&n!=2)
	{
       printf("�������������1��2\n");
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
