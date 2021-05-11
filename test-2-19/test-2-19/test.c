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
		 printf("请输入密码：>");
		 scanf("%s",password);
		 if(strcmp(password ,"123456")==0)
		// if(password=="123456")//==不能用来比较两个字符串是否相等
		 { //应该使用一个库函数-strcmp  
			 printf("登陆成功\n");
				 break;
		 }
		 else
			 printf("密码错误\n");

		 if(i==3)
			 printf("三次密码均错误，退出程序\n");
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
//		//休息一秒
//		Sleep(1000);
//		system("cls"); //执行系统命令的一个函数  cls 清空屏幕
//		left++;right--;
//	}
//	printf("%s\n",arr2);
//{ 
//	int k=7;
//	int arr[]={1, 2, 3 ,4, 5 ,6 , 8, 9, 10,11};
//	
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;//左下标
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
//		printf("找到了，下标是：%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
	

//	//买了一双鞋  ；500  1   2  3  4  5 
//{int arr[]={1,2,3,4,5,6,7,8,9,10};  
//int k=17;
////写一个代码在arr数组（有序的）中找到7
// int i=0;
// int sz=sizeof(arr)/sizeof(arr[0]);
// for(i=0;i<sz;i++)
// {
//	 if(k==arr[i])
//	 {
//		 printf("找到了,下标是%d\n",i);
//		 break;
//	 }
// }
// if(i==sz)
//	 printf("找不到\n");


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
	////for(x=0,y=0;x<2&&y<5;++x,y++)// &&并且
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
//	//10次循环 10次打印 10个元素
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	/*
	/*int i=0;
	for(i=0;i<10;i++)
	{ if(i=5)
	  printf("哈哈\n");
		printf("呵呵\n");
	//}*/
//	int i=0;
//	//初始化 判断 调整
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;
//		printf("%d ",i);
//	}
//
//{   int i=0;//初始化
//    while(i<=10)//判断
//	{
//  if(i==5)// ...
//	  continue;
//  printf("%d ",i);
//		i++;//调整
//	}
//	/* int ch=0;
	//while((ch=getchar())!=EOF)
	//{
	//	if (ch<'0'||ch>'9')
	//		continue;
	//	 putchar(ch);
	//}
	/////////*int ch=0;*/
	////////EOF - end of file 文件结束标志
	//// while ((ch=getchar())!=EOF)
	//// {
	////	 putchar(ch);
	////// }
	//int ch=0;
	//int ret=0;
	//char password[20]={0};
	//printf("请输入密码：>");
	//scanf("%s",password);//输入密码并存放在password数组中 %s-输入的是字符串
	////缓冲区还剩余一个'\n'
	////读取一下'\n'
	///*getchar();*/
	//while( ch =getchar()!='\n')
	//{
	//	;
	//}

	//printf("请确认（Y/N）：>");
	//ret=getchar();//Y/N
	//if(ret=='Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
	/* printf("%d\n",'\n');*/
	return 0;
}