 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//	struct Book
//	{
//		char name[20];//
//		short price;
//
//};//创建一个结构体类型
//	//结构体  人 （名字 身高 年龄 身份证号码） 书（书名 作者 出版社 定价 书号） -复杂对象
//int main()
//{ struct Book b1={"C语言程序设计",55};//利用结构体类型创建一个该类型的结构体变量
//////printf("书名：%s\n",b1.name);printf("价格 ：%d\n",b1.price);
////b1.price=15;
//strcpy(b1.name,"线性代数");//strcpy-string copy-字符串拷贝 - 库函数-string.h
//printf("%s\n",b1.name);
////struct Book* pb=&b1;//利用pb打印出书名和价格
//printf("%s\n",pb->name);
//printf("%s\n",pb->name);
//printf("%d\n",pb->price);
//.结构体变量.成员 ->结构体指针->成员

//printf("%s\n",(*pb).name);
//printf("修改后的价格：%d\n",b1.price);
	
//{double d=3.14;
//double* pd=&d;
//*pd=5.5;
//printf("%lf\n",*pd);
//printf("%d\n",sizeof(pd));

//{int a=10;//申请 4个字节的空间
//int* p=&a;//p是一个变量-指针变量
//printf("%p\n",&a);
//printf("%p\n",p);
////*p; //*-
//	return 0;
//} 