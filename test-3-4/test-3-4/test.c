 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int tmp=0;
//	scanf("%d%d%d",&a,&b,&c);//2 1 3
//	//�㷨ʵ�� a�з����ֵ b��֮ c�з���Сֵ
//	if(a<b)
//	{
//		tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)
//	{
//		tmp=a; 
//		a=c;
//		c=tmp; 
//     }
//	if(b<c)
//	{
//		tmp=b;
//		b=c;
//		c=tmp;
//	}
//	
//	printf("%d %d %d",a, b ,c);
//

	/*int i=0;
	for(i=1;i<=100;i++)
		if(i%3==0)
			printf("%d\n",i);*/
	/*{*/
		//int m=18;
		//int n=24;
		//int r=0;
		//scanf("%d%d",&m,&n);
		//while(r=m%n)
		//{
		//	//r=m%n;
		//	m=n;
		//	n=r;

		//}
		//printf("���Լ����%d",n);
		//

		//
		/*int year=0;
		int count=0;
		for(year=1000;year<=2000;year++)
		*/
		
		//	if(year%4==0&&year%100!=0)
		//	{
		//	
		//		printf("����������%d\n",year);
		//	count++;
		//	}
		//	//�ж�year�Ƿ�Ϊ����  �ܱ�400������������ �ܱ�4�������Ҳ��ܱ�100������������
		//
		//else if(year%400==0)
		////{
		////	printf("����������%d\n",year);
		////	count++;
		//////	}
		////if((year%400==0)||(year%4==0&&year%100!=0))
		////{
		////	printf("����������%d\n",year);
		////	count++;
		////}
		////	printf("count=%d\n",count);
		//{
		//	int i=0; int j=0;int count=0;
		//	for(i=101;i<=200;i+=2)
		//	{
		//		//�ж�i�Ƿ�Ϊ���� 
		//		//�����жϵĹ��� 
		//		// �Գ��� 
		//	for(j=2;j<=sqrt(i);j++)//sqrt-��ƽ������ѧ�⺯��
		//	{
		//		if(i%j==0)
		//		{
		//			break;
		//		}
		//	}//
		//	if(j>sqrt(i))
		//	{
		//		count++;
		//		printf("%d\n",i);
		//	}
		//
		//	}
		//	
		//	printf("count=%d",count);
		//}
		//1-100��9�ĸ���

		/*int main()
		{
			int i=0;
			int count=0;
		for(i=1;i<=100;i++)
		{
			if(i%10==9)
				count++;
			 if(i/10==9)
				count++;
		}
		printf("count=%d",count);*/
		// 9 19 29 39 49 59 69 79 89 99 10
		// 90 91 92 93 94 95 96 97 98  99 10
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum=sum+flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//int main()
//{int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//int max=arr[0];
//int i=0;
//int sz=sizeof(arr)/sizeof(arr[0]);
//for(i=1;i<sz;i++)
//{
//	if(arr[i]>max)
//		max=arr[i];
//}
//printf("max=%d\n",max);
//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=1 2*2=4
//3*1=3 3*2=6 3*3=9
   //9*1=9
//int main()
//{int i=0; 
//for(i=1;i<=9;i++)//ȷ����ӡ9��
//{
//	int j=1;
//	for(j=1;j<=i;j++)
//	
//	{
//		printf("%d*%d=%-2d ",i,j,i*j);
//	}
//	  printf("\n");
//	
//
//	//��ӡһ��
//
//}
//
//
//	return 0;
// void menu()
// {
//	 printf("****************************\n");
//	 printf("*****  1.play  0.exit ******\n");
//	 printf("****************************\n");
// }
// //RAND_MAX -32767
// void game()
// {  int ret=0;
// int guess=0;//���ղµ�����
//
//  //��ʱ����������������������� //time_t time(time_t *timer)
//	// 1.����һ������� 2.������
//  
//	 ret= rand()%100+1;//����1-100֮�������
//	//printf("%d\n",ret);
//	  while(1)
//	{
//		printf("�������:>");
//		scanf("%d",&guess);
//	
//	if(guess>ret)
//	{
//		printf("�´���\n");
//	}
//	else if(guess<ret)
//	{
//		printf("��С��\n");
//
//	}
//	else 
//	{
//		printf("��ϲ�㣬�¶���");
//		break;
//	}
//	  }
//	
// }
//
//int main()
//{   int input=0;
//
// srand((unsigned int)time(NULL));
//	do
//	{
//     menu();
//	 printf("��ѡ��>:");
//	 scanf("%d",&input);
//	 switch(input)
//	 {
//	 case 1:
//		 game();//��������Ϸ
//		 break;
//	  case 0:
//		  printf("�˳���Ϸ\n");
//		  break;
//default:
//  printf("ѡ�����\n");
//		  break;
//
//	 }
//	 
//
//
//
//	}
//	while(input);
//	//��������Ϸ 1.���Ի�����һ������� 2 ������  
//	return 0;
////}
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{char input[20]={0};
//// shutdown -s ���ùػ� -t 60 ����ʱ��ػ� 60���ػ� shutdown -aȡ���ػ�
//	//system -ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)//�Ƚ������ַ��� -strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//   goto again;
//	}
//	return 0;
//}
//int main()
//{char input[20]={0};
//// shutdown -s ���ùػ� -t 60 ����ʱ��ػ� 60���ػ� shutdown -aȡ���ػ�
//	//system -ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	while(1)
//	{
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)//�Ƚ������ַ��� -strcmp()
//	{
//		system("shutdown -a");
//		break;
//	}
//	
//	}
//	return 0;
//}
// int Add(int x,int y)
// {
//	int z=0;
//	z=x+y;
//	return z;
////
////}
////int main()
////{
//// int a=10;
//// int b=20;
////int sum= Add(a,b);
//// printf("%d\n",sum);
//// //strlen
////
////	return 0;
//////}
////int main()
////{ char arr[]="hello world";
////memset(arr,'4',5);
////printf("%s\n",arr);
//
//	//memset
//	//memory -�ڴ� set-����
////{
////	char arr1[]="bit";
////	char arr2[20]="#########";
////	strcpy(arr2,arr1);
////
////	printf("%s",arr2);
////
////	//strcpy -string copy -�ַ�������
////	//strlen-string length -�ַ��������й�
////	return 0;
////}
//int get_max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//������ʹ��
//	int max=get_max(a,b);
//	printf("max=%d\n",max);
//	max=get_max(100,300);
//	printf("max=%d\n",max);
//	return 0;
//}
//void swap1(int x,int y)
//{
//	int tmp=0;
//	tmp=x;
//	x=y;
//	y=tmp;
//}//�����������
//��ʵ�δ����βε�ʱ�� �β���ʵ��ʵ�ε�һ����ʱ���� ���βε��޸��ǲ���ı�ʵ�ε�
//void Swap2(int *pa,int *pb)
//{int tmp=0;
//  tmp=*pa;
//*pa=*pb;
//*pb=tmp;
//
//}
//
//int main()
//{int a=10;
//int b=20;
////int tmp=0;
//printf("a=%d b=%d\n",a,b);
//
////tmp=a;
////a=b;
////b=tmp;
// /* swap1(a,b);*/ ���� Swap1����
//Swap2(&a,&b);//����Swap2����
//printf("a=%d b=%d\n",a,b);
//
//	return 0;
//}
//int  main()
//{
//	int a=10;
//	 int* pa=&a;//paָ����� 
//	 *pa=20;//�����ò���
//		 printf("%d\n",a);
//return 0;
//}
//
//int is_prime(int n)//����������1 ������������0
//{int j=0;
//for(j=2;j<=sqrt(n);j++)
//{
//	if(n%j==0)
//		return 0;
//}
//	
//return 1;
//}
//int main()
//{//��ӡ100-200֮�������
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//	�ж�i�Ƿ�Ϊ����
//	if(is_prime(i)==1)
//	printf("%d\n",i);
//	}
//	return 0;
//} 
//int is_leap_year (int x)
//{
//	if(( x%4==0&&x%400!=0)||(x%400==0))
//		return 1;
//	else return 0;
//
//}
//int main()
//{//��ӡ1000-2000��֮�������
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж��ǲ�������
//		if(is_leap_year(year)==1)
//		{
//			printf("%d\n",year);
//		}
////	}
////
////	return 0;
////}
//int bunary_search(int arr[],int x,int sz)//������arr��һ��ָ��
//{
//int left=0;
//int right=sz-1;
//while(left<=right)
//{
//int mid=(left+right)/2;//�м�Ԫ���±�
// if(arr[mid]<x)
// {
// left=mid+1;
// }
// else if(arr[mid]>x)
// {
//	 right=mid-1;
// }
// else
// {
//	 return mid;
// }
//}
//return -1;
//}
//
//
//
//	//�㷨��ʵ��
//
//int main()
//{   //���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//int right=sz-1;
//	int k=7;
//	int ret=bunary_search(arr,k,sz);// arr���ݵ��������һ��Ԫ�صĵ�ַ
//	if(ret==-1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n",ret);
//	}
//
//	return 0;
//}
////
// void Add(int *p)
// {
// (*p)++;
// }
//int main()
//{
//	int num=0;
//	Add(&num);
//	printf("num=%d\n",num);//1
//    Add(&num);
//	printf("num=%d\n",num);//2
//	 Add(&num);
//	 printf("num=%d\n",num);//3
//
//
//
//	return 0;
//}
//int main()
//{ //1
//	int len=0;
//
// len=strlen("abc");
// printf("%d\n",len);
// //2
// printf("%d\n",strlen("abc"));
//
//	return 0;
//}
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//printf�������ص��Ǵ�ӡ���ַ��ĸ��� 4321
//	
//	
////	return 0;
////}
//////��������
////int Add(int ,int );
//#include "add.h"
//int main()
//{ int a=10;
//int b=20;
//int sum=0;
////��������
//sum=Add(a,b);
//printf("%d",sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x,int y)
//{
//	int z=x+y;
////	return z;
////}
//#include"add.h"
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("%d",sum);
//	return 0;
//}
//int main()
//{ 
//	printf("hehe\n");
//	main();//
//	return 0;
//}
// void print(int n)//n=123
// {
//	 if(n>9)
//	 {
//		 print(n/10);// print(12) print(1)  1 2 3
//	 }
//	 printf("%d ",n%10);
//
//
//
// }
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);//1234
//	print(num);
//	//�ݹ�
//	return 0;
////
////}
//int my_strlen(char *str)
//{
//	//�����ַ����ĳ���
//	int count=0; 
//	while((*str)!='\0')
//	{
//		count++;
//			str++;
////	}
////	return count;
////
////}
////�ݹ�ķ���
//int my_strlen(char *str)
//{ if ((*str)!='\0')
//  return  1+my_strlen(str+1);
//else 
//	return 0;
//
//}
////�Ѵ��»�С
//int main()
//{ char arr[]="bit";
// //int len=strlen(arr);//���ַ�������
// //printf("%d\n",len);
// int len=my_strlen(arr);//arr ������  ���鴫�� ����ȥ�Ĳ����������� ���ǵ�һ��Ԫ�صĵ�ַ
// //ģʽʵ����һ��strlen����
// printf("len=%d\n",len);
//
//	return 0;
//}
