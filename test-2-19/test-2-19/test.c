#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int  main()
{
	 int i=0;
	 char password[]={0};
	 for(i=0;i<3;i++)
	 {
		 printf("���������룺>");
		 scanf("%s",password);
		 if(strcmp(password ,"123456")==0)
		// if(password=="123456")//==���������Ƚ������ַ����Ƿ����
		 { //Ӧ��ʹ��һ���⺯��-strcmp  
			 printf("��½�ɹ�\n");
				 break;
		 }
		 else
			 printf("�������\n");

		 if(i==3)
			 printf("��������������˳�����\n");
	 }
//{
//	char arr1[]="Welcome to bit !!!!!! ";
//	char arr2[]="######################";
//	int  left=0;
//	int right=strlen(arr1)-1;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-1; errro
//	// char arr[]="a b c";
//	    //a b c \0
//       // 0 1 2 3
//
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls"); //ִ��ϵͳ�����һ������  cls �����Ļ
//		left++;right--;
//	}
//	printf("%s\n",arr2);
//{ 
//	int k=7;
//	int arr[]={1, 2, 3 ,4, 5 ,6 , 8, 9, 10,11};
//	
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;//���±�
//	int right= sz-1;
//	while(left<=right)
//	{
//	
//	int mid=(left+right)/2;
//	if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else 
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
	

//	//����һ˫Ь  ��500  1   2  3  4  5 
//{int arr[]={1,2,3,4,5,6,7,8,9,10};  
//int k=17;
////дһ��������arr���飨����ģ����ҵ�7
// int i=0;
// int sz=sizeof(arr)/sizeof(arr[0]);
// for(i=0;i<sz;i++)
// {
//	 if(k==arr[i])
//	 {
//		 printf("�ҵ���,�±���%d\n",i);
//		 break;
//	 }
// }
// if(i==sz)
//	 printf("�Ҳ���\n");


//	int i=0;
//	int sum=0;
//	
//	int ret=1;
//	for(i=1;i<=10;i++)
//	{ 
//			ret=ret*i;
//		 sum=sum+ret;
//	}
//	printf("sum=%d",sum); 
//
////{  
//	int i=10;
//	int sum=0;
//	int n=1;
//	int ret=1;
//	for(i=1;i<=3;i++)
//	{   ret=1;
//		for(n=1;n<=i;n++)
//			ret=ret*n;
//		 sum=sum+ret;
//	}
//	printf("sum=%d",sum); 
//	/*int n,ret=1;
//   scanf("%d",&n);
	  /* ret=n;
	   for(;n!=1;n--)
		   ret=ret*(n-1);
	    printf("ret=%d",ret);
*/
	////1-10
	//int i=1;
	//do
	//{
	//	if (i==5)
	//		continue;
	// printf("%d ",i);
	// i++;
	//}
	//  while(i<=10);

	////int x,y;
	////for(x=0,y=0;x<2&&y<5;++x,y++)// &&����
	//{
	//	printf("hehe\n");
	//}
	///*int i=0;int j=0;
	// for(;i<10;i++)
	// {
		// 
		// for(j=0;j<10;j++)
		// {
		//	 printf("hehe\n");
		// }
	 //}*/
  // /* for(;;)
//	{
//		printf("hehe\n");
//	}
//*/
////	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	//10��ѭ�� 10�δ�ӡ 10��Ԫ��
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	/*
	/*int i=0;
	for(i=0;i<10;i++)
	{ if(i=5)
	  printf("����\n");
		printf("�Ǻ�\n");
	//}*/
//	int i=0;
//	//��ʼ�� �ж� ����
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;
//		printf("%d ",i);
//	}
//
//{   int i=0;//��ʼ��
//    while(i<=10)//�ж�
//	{
//  if(i==5)// ...
//	  continue;
//  printf("%d ",i);
//		i++;//����
//	}
//	/* int ch=0;
	//while((ch=getchar())!=EOF)
	//{
	//	if (ch<'0'||ch>'9')
	//		continue;
	//	 putchar(ch);
	//}
	/////////*int ch=0;*/
	////////EOF - end of file �ļ�������־
	//// while ((ch=getchar())!=EOF)
	//// {
	////	 putchar(ch);
	////// }
	//int ch=0;
	//int ret=0;
	//char password[20]={0};
	//printf("���������룺>");
	//scanf("%s",password);//�������벢�����password������ %s-��������ַ���
	////��������ʣ��һ��'\n'
	////��ȡһ��'\n'
	///*getchar();*/
	//while( ch =getchar()!='\n')
	//{
	//	;
	//}

	//printf("��ȷ�ϣ�Y/N����>");
	//ret=getchar();//Y/N
	//if(ret=='Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}
	/* printf("%d\n",'\n');*/
	return 0;
}