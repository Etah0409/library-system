/*�ļ�����system_main_alg.c*/
#include "_library_system_alg.h"
#include "warden_system.cpp"
#include "Login.cpp"

FILE *fp;

int main()
{
	int n;
	printf("��ӭ��½ͼ�����ϵͳ����ѡ���½���ͣ�\n\n����Ա��¼�밴1,���ߵ�¼�밴2���س�����\n");

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
				       
		                printf("����Ա��������еĲ����ǣ�1.�����û���2.����ͼ�飻�س�����\n");
					
				           scanf("%d",&j);
					      while(j!=1&&j!=2)
						  {
							  Error();
							  scanf("%d",&j);
						  }
						  if(j==1) {  int k;
						                printf("������еĲ����ǣ�1.�����û���2.ɾ���û���3.�����û���4.��ѯ�û����س�����\n");
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
		                                printf("������еĲ����ǣ�1.����ͼ����Ϣ��2.ɾ��ͼ����Ϣ��3.����ͼ����Ϣ��4.��ѯͼ����Ϣ���س�����\n");
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
		     
		       printf("������еĲ����ǣ�1.��ѯĿǰ״̬��2.���飻3.���飻4.��ѯ����ͼ����Ϣ");
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