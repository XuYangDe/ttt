 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
//{char ch='w';
//char *pc=&ch;
//*pc='a';
////printf("%c\n",ch);
//printf("%d",sizeof(pc));
	//int a=10;//4个字节
	//int *p=&a;//取出a的地址 //p为一个整形指针变量-存的地址指向的是整形
	////有一种变量是用来存放地址的 -指针变量
 //printf("%p\n",&a);
 // printf("%p\n",p);
 // *p=20;//解引用操作符-找到p所指向的对象a
 // printf("%d",a);
 return 0;
}
	/*int ADD(int x,int y)
{int z=0;
z=x+y;
return z;
}*/
//调试的时候进到一个函数内部去按Fn+F11
//void test()
//{
//	 static int a=1;  //a是一个静态的局部变量
//	 //static修饰局部变量 局部变量的生命周期变长
//static修饰全局变量  改变了变量的作用域 -让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//static修饰函数 -也是改变了函数的作用域-不准确
//改变了函数的链接属性
////外部链接属性->内部链接属性
////声明外部函数
////extern int Add(int,int);
////#define MAX 100//#define 定义标识符常量 
////#define 可以定义宏-带参数
//int Max(int x,int y)
//{if(x>y)
//return x;
//else 
//	return y;
//}
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{int a=10;
//int b=20;
////函数
//int max=Max(a,b);
//	printf("max=%d\n",max);
//	//宏的方式
//	max=MAX(a,b);
//	printf("max=%d\n",max);
//
//

	/*int a=MAX;*/
////{//extern-声明外部符号
////	extern int g_val;
////	printf("g_val=%d\n",g_val);
//
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("sum=%d\n",sum);
//


//a++;
//printf("a=%d\n",a);
//}
//int main() 
//{ int i=0;
//while (i<5)
//{test();
//i++;
//}
//{unsigned int num=20;
//typedef unsigned int u_int;
//u_int num2=20;
//	//typedef-类型定义-类型重定义
////{ register int a=10;//建议把 a定义成寄存器变量
//int a=10;//局部变量 -自动变量    int 定义的变量是有符号的  signed  unsigned
////struct -结构体关键字 union-联合体 共用体
	
//{int  a=10;
//int b=20;
//int sum=0;
//	int arr[10]={0};
//arr[4];//[]-下标引用操作符
////& * . ->
//
//sum=ADD(a,b);//()-函数调用操作符
//printf("%d\n",sum);
////{int a=10;
//int b=20;
//int max=0;
//max=(a>b?a:b);// 条件操作符 三目操作符
//printf("%d\n",max);
//	// 0假 非0 真 &&逻辑与 同时为真才为真 ||逻辑或 只要为真就为真
//int a=3;
//int b=3; 
//int c=a||b;
//printf("%d\n",c);

//{ int a=(int)3.14;// double->int
//{int a=10;
//int b=a++;//后置++ ,先使用，再++ b 10 a 11
//int c=++a;//前置++， 先++ 再使用
//printf("%d\n%d\n",c,a); 
////{
//	int a=0;
//	int b=~a;//~-按（2进制）位取反 b是有符号的整形  最高位为1表示是负数
//	printf("%d",b);//原码 反码 补码 负数在内存中存的是补码 使用打印的是这个数的原码
//	//补码-1得到反码 反码得到原码按位取反
//
////{int a=10;
//int arr[]={1 ,2 ,3, 4 ,5 ,6 };
//	printf("%d\n",sizeof(a));//sizeof是一个操作符
//printf("%d\n",sizeof(arr));//计算数组大小 单位是字节
//printf("%d\n",sizeof(arr)/sizeof(int));

	/*return 0;*/
// 
//int Max(int x,int y)
//{if(x>y)
//return x;
//else 
//	return y;
//}
//int main()
//{int num1=10;
//int num2=20;
//int max=0;
//max=Max(num1,num2);
//printf("max=%d",max);
//if(num1>num2)
//	printf("较大值是：%d\n",num1);
//else printf("较大值是：%d\n",num2);
//return 0;
//	
//}