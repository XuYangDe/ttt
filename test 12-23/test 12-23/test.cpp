 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ int j=0;
	int i=0;
	for(;i<10;i++)
	{
	for(;j<10;j++)
	{
		printf("hehe\n");//j��ֵΪ10һֱû�иı�

	}
	}
	
	/*for(;;)
	{printf("hehe\n");
	}*/
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int i=0;
//	for(;i<10;i++)
//		printf("%d\n",arr[i]);//10��ѭ�� 10�δ�ӡ 10��Ԫ��
// 
	return 0;
}
	/*int i=0;
	for(i=0; i<10;i++)
	{
		if(i=5)
			printf("haha\n");
	printf("hehe\n");
	}
	return 0;
}*/

//{for(int i=1;i<11;i++)
//{if(i==5)
//	continue;
//printf("%d\n",i);
//}
//
//	return 0;
//}

//{ int i=1;//ѭ�������ĳ��Ի�
//while(i<=10)//�ж�
//{if(i==5)
// continue;
//printf("%d\n",i);
//
//	i++;//����
//}
//	return 0;
//}

//{int  ch=0;
//
//while((ch=getchar())!=EOF)
//{if(ch<'0'||ch>'9')
//continue;
//putchar(ch);
//}
//
//	return 0;
//}

//{ int ch=0;
//  //while((ch=getchar())!=EOF)// EOF -end of file �ļ�������־ 
//	 // putchar(ch);
//int ret=0;
//char password[20]={0};
//printf("���������룺>");
//scanf("%s",password);//�������룬�������password������
////��������ʣ��һ��'\n' ��ȡһ��'\n'
//while(ch=getchar()!='\n')
//{;
//}
////getchar();
//printf("��ȷ�ϣ�Y/N��:>");
//ret=getchar();//Y/N
//if(ret=='Y')
//{
//	printf("ȷ�ϳɹ�\n");
//}
//else
//	printf("����ȷ��\n");
////printf("%d\n",'\n');
//return 0;
//}