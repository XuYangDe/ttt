 #define _CRT_SECURE_NO_WARNINGS
;//�����-�����
#include<stdio.h>
int main()
{ int ch=0;
while((ch=getchar())!=EOF)
	//ctrl+z  EOF-end of file->-1
	putchar(ch);

//{ char ch=getchar();
//   putchar(ch);
//   printf("%c\n",ch);
////{ int i=0;
//while(i<=10)
//{  i++;
//	if(i==5)
//		continue;//continue�������ǽ�����ѭ������ continue����Ĵ��벻��ִ�� ������һ��ѭ�� �ж��ܲ��ܽ���
//	printf("%d\n",i);
//   
//}
//while(i<=10)
//{ 
//	if(i==5)
//		break;
//	printf("%d\n",i);
//   i++;
//}
	/*while(1)
  printf("hehe");*/
//int main()
//{int day;
//scanf("%d",&day);
//switch(day)
//{
//case 1:
//
//case 2:
//case 3:
//case 4:
//case 5:
//	printf("������\n");
//	break;
//case 6:
//case 7:
//	printf("��Ϣ��\n");
//	break;
//default:
//printf("�������\n");
//break;
//
//}
//case 1: 
//    printf("����1\n"); 
//	break;
//case 2:
//	 printf("����2\n");
//	 break;
//case 3:
//	 printf("����3\n"); 
//	 break;
//case 4:
//	 printf("����4\n");
//	 break;
//case 5:
//	 printf("����5\n");
//	 break;
//case 6:
//	 printf("����6\n");
//	 break;
//case 7:		
//	 printf("������\n");
//	 break;
//}
//...
 
//int main()
//{int  arr[100];int i=0;
//for(i=0;i<100;i++)
//
//	arr[i]=i+1;
//
//
//for(i=0;i<100;)
//{if(arr[i]%2==1)
//printf("%d������\n",arr[i]);
//i++;
//}

//printf("δ����\n");
//if(a==1)
//	if(b==2)
//		printf("�Ǻ�\n");
//	else printf("����\n");
//	/*int age=12;
////if(age<18)
//{
//	printf("δ����\n");
//printf("����̸����\n");
//}
//  
//else
//{if(age>=18&&age<28)
//printf("����\n");
//else printf("׳��\n");
//}*/
//else if(age>=18&&age<28)
//	printf("����\n");
//else printf("׳��\n");//����ʡ��
// 
//if(age<18)
//	printf("δ����\n");
//else
//	printf("����\n");
 /*if(age<18)
	 printf("δ����\n");*/
	return 0;
}