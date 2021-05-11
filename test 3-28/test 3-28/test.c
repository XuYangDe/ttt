#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int Fac1(int n)
//{ int i=0;
//int ret=1;
////	for(i=1;i<=n;i++)
////		ret*=i;
////	return ret;
////}
// int Fac2(int n)
// { 
//	 if (n<=1)
//		 return 1;
//	 else
//		 return n*Fac2(n-1);
//
// }
//int main()
//{ 
//	//求n的阶乘
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fac2(n);
//	printf("%d\n",ret);
//	return 0;
////}
//int count=0;
//int  Fib(int n)
//{
//	if (n==3)//测试第三个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n<=2)
//		return 1;
////	else 
////		return Fib(n-1)+Fib(n-2);
////	//50
////}
//int Fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{ 
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//	
//}
//
//int main()
//	//斐波那契数列
//	// 1 1 2 3 5 8
//{
//	//求第n个斐波那契数 
//	int n=0;
//	int ret=0;
//	//TDD-测试驱动开发
//	scanf("%d",&n);
//	ret=Fib(n);
////	printf("ret=%d\n",ret);
////	
////	return 0;
////}
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//int main()
//{
//	test(1);
////	return 0;
////}
//int main()
//{
//	//创建一个数组-存放整型-10个 
//	//int arr[10]={1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5]={'a',98}; //常量表达式，用来指定数组的大小
//	//char arr3[5]="ab";//ok
//	char arr4[]="abcdef";
//	printf("%d\n",sizeof(arr4));//7 
//	//sizeof计算arr4所占空间的大小 
//	//7个元素 char  7*1=7
//	printf("%d\n",strlen(arr4));//6
//	//求字符串的长度 \0就停止 \0不算字符串的内容 '\0'之前的字符个数
//
//	// 1 strlen 和sizeof没有什么关联
//	// 2 strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//	//3 sizeof计算变量 数组 类型 的大小 -单位是字节-操作符
//	return 0;
//
//}
//int main()
//{
//	char arr1[]="abc";// a b c \0
//	char arr2[]={'a','b','c'};// a b c
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr2));// 求arr2数组遇到\0的长度 后面的数不可知 所以是随机值
//
//
//return 0;
//}
//int main()
////{ int i=0;
////
////	char arr[]="abcdef";
////	int len=strlen(arr);
////	/*printf("%c",arr[3]);*/
////	for(i=0;i<len;i++) //strlen默认返回的是一个无符号整形的一个值
////	{
////		printf("%c ",arr[i]);
////	}
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}
//int  main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	//打印地址用的是%p
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//
//	return 0;
////}
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//    
//		//确定行数
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n ",i,j,&arr[i][j]);
//		}
//         printf("\n");
//	}
//
//	//char ch[5][6];
//	//int arr[]={1,2,3,4};
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}};//二维数组的列不能省略  行能省略
//	return 0;
//} 
// void bubble_sort(int arr[],int sz)
// {
//		//确定冒泡排序的趟数
//		int i=0;
//		for(i=0;i<sz-1;i++)//假设sz=10
//		{   
//			int  flag=1;//假设这一趟要排序的数据已经有序
//			//每一趟冒泡排序
//			int j=0;
//			for(j=0;j<sz-1-i;j++)
//			{
//				if(arr[j] >arr[j+1])
//				{
//					int tmp=arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=tmp;
//					flag=0;//本趟排序的数据其实不完全有序
//					  
//				}
//			}
//			if (flag==1)
//			{
//		       break;
//			}
//	
//		}
// }
//
//		//冒泡排序   10个元素 9趟冒泡排序  每一趟 第一趟进行9对这样的比较 第二趟进行8对这样的比较
//
//		// 10 9 8 7 6 5 4 3 2 1
// 
//int main()
//{
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//元素个数
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒泡排序函数 //arr是数组 我们对数组arr进行传参 实际上传递过去的是数组arr首元素的地址    
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7}; 
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);//取出的是数组的地址
//	printf("%p\n",&arr+1);
//	/*int sz=sizeof(arr)/sizeof(arr[0]);*/
//	//数组名是首元素地址 但有2个例外 sizeof(arr) 计算的是整个数组的大小 单位是字节
//	//2  &数组名 数组名代表整个数组 &数组名 取出的是整个数组的地址 除了这两种情况外 所有的数组名都表示首元素的地址
//	/*printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%d\n",*arr);*/
//	return 0;
//}
int main()
{
	return 0;
}