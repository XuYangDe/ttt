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
//	//算法实现 a中放最大值 b次之 c中放最小值
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
		//printf("最大公约数是%d",n);
		//

		//
		/*int year=0;
		int count=0;
		for(year=1000;year<=2000;year++)
		*/
		
		//	if(year%4==0&&year%100!=0)
		//	{
		//	
		//		printf("该年是闰年%d\n",year);
		//	count++;
		//	}
		//	//判断year是否为闰年  能被400整除的是闰年 能被4整除并且不能被100整除的是闰年
		//
		//else if(year%400==0)
		////{
		////	printf("该年是闰年%d\n",year);
		////	count++;
		//////	}
		////if((year%400==0)||(year%4==0&&year%100!=0))
		////{
		////	printf("该年是闰年%d\n",year);
		////	count++;
		////}
		////	printf("count=%d\n",count);
		//{
		//	int i=0; int j=0;int count=0;
		//	for(i=101;i<=200;i+=2)
		//	{
		//		//判断i是否为素数 
		//		//素数判断的规则 
		//		// 试除法 
		//	for(j=2;j<=sqrt(i);j++)//sqrt-开平方的数学库函数
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
		//1-100数9的个数

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
//按屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=1 2*2=4
//3*1=3 3*2=6 3*3=9
   //9*1=9
//int main()
//{int i=0; 
//for(i=1;i<=9;i++)//确定打印9行
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
//	//打印一行
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
// int guess=0;//接收猜的数字
//
//  //拿时间戳来设置随机数的生成起点 //time_t time(time_t *timer)
//	// 1.生成一个随机数 2.猜数字
//  
//	 ret= rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n",ret);
//	  while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d",&guess);
//	
//	if(guess>ret)
//	{
//		printf("猜大了\n");
//	}
//	else if(guess<ret)
//	{
//		printf("猜小了\n");
//
//	}
//	else 
//	{
//		printf("恭喜你，猜对了");
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
//	 printf("请选择>:");
//	 scanf("%d",&input);
//	 switch(input)
//	 {
//	 case 1:
//		 game();//猜数字游戏
//		 break;
//	  case 0:
//		  printf("退出游戏\n");
//		  break;
//default:
//  printf("选择错误\n");
//		  break;
//
//	 }
//	 
//
//
//
//	}
//	while(input);
//	//猜数字游戏 1.电脑会生成一个随机数 2 猜数字  
//	return 0;
////}
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{char input[20]={0};
//// shutdown -s 设置关机 -t 60 设置时间关机 60秒后关机 shutdown -a取消关机
//	//system -执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)//比较两个字符串 -strcmp()
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
//// shutdown -s 设置关机 -t 60 设置时间关机 60秒后关机 shutdown -a取消关机
//	//system -执行系统命令的
//	system("shutdown -s -t 60");
//	while(1)
//	{
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)//比较两个字符串 -strcmp()
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
//	//memory -内存 set-设置
////{
////	char arr1[]="bit";
////	char arr2[20]="#########";
////	strcpy(arr2,arr1);
////
////	printf("%s",arr2);
////
////	//strcpy -string copy -字符串拷贝
////	//strlen-string length -字符串长度有关
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
//	//函数的使用
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
//}//不能完成任务
//当实参传给形参的时候 形参其实是实参的一份临时拷贝 对形参的修改是不会改变实参的
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
// /* swap1(a,b);*/ 调用 Swap1函数
//Swap2(&a,&b);//调用Swap2函数
//printf("a=%d b=%d\n",a,b);
//
//	return 0;
//}
//int  main()
//{
//	int a=10;
//	 int* pa=&a;//pa指针变量 
//	 *pa=20;//解引用操作
//		 printf("%d\n",a);
//return 0;
//}
//
//int is_prime(int n)//是素数返回1 不是素数返回0
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
//{//打印100-200之间的素数
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//	判断i是否为素数
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
//{//打印1000-2000年之间的闰年
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断是不是闰年
//		if(is_leap_year(year)==1)
//		{
//			printf("%d\n",year);
//		}
////	}
////
////	return 0;
////}
//int bunary_search(int arr[],int x,int sz)//本质上arr是一个指针
//{
//int left=0;
//int right=sz-1;
//while(left<=right)
//{
//int mid=(left+right)/2;//中间元素下标
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
//	//算法的实现
//
//int main()
//{   //二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//int right=sz-1;
//	int k=7;
//	int ret=bunary_search(arr,k,sz);// arr传递的是数组第一个元素的地址
//	if(ret==-1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",ret);
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
//	printf("%d",printf("%d",printf("%d",43)));//printf函数返回的是打印的字符的个数 4321
//	
//	
////	return 0;
////}
//////函数声明
////int Add(int ,int );
//#include "add.h"
//int main()
//{ int a=10;
//int b=20;
//int sum=0;
////函数调用
//sum=Add(a,b);
//printf("%d",sum);
//	return 0;
//}
////函数的定义
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
//	//递归
//	return 0;
////
////}
//int my_strlen(char *str)
//{
//	//计算字符串的长度
//	int count=0; 
//	while((*str)!='\0')
//	{
//		count++;
//			str++;
////	}
////	return count;
////
////}
////递归的方法
//int my_strlen(char *str)
//{ if ((*str)!='\0')
//  return  1+my_strlen(str+1);
//else 
//	return 0;
//
//}
////把大事化小
//int main()
//{ char arr[]="bit";
// //int len=strlen(arr);//求字符串长度
// //printf("%d\n",len);
// int len=my_strlen(arr);//arr 是数组  数组传参 传过去的不是整个数组 而是第一个元素的地址
// //模式实现了一个strlen函数
// printf("len=%d\n",len);
//
//	return 0;
//}
