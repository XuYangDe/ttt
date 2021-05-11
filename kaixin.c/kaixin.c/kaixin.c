#include <stdio.h>// 包含一个叫stdio.h的文件 
//int global=2020;//全局变量的作用域是整个工程
int main()
{  extern int g_val; 
	printf("g_val=%d\n",g_val);//未声名的标识符-声明extern的外部符号
return 0;
// void test()
// {printf("test()--%d\n",global);
// }
//int main()
//{  test();
//	printf("%d\n",global);
//return 0;
	//int num=0;
	//{printf("num=%d\n",num);//局部变量的作用域所在局部代码块内
	//}
	//
	//
	//return 0;
	 
	////计算2个数的和
	//int num1=0;
	//int num2=0;
	//int sum=0;//C语言语法规定 变量要定义在当前代码块的最前面
	////输入数据-使用输入函数scanf
	//scanf("%d%d",&num1,&num2);//取地址符号 
	//
	//
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;
}

//int a=10;
//int main()
//{
//	
//	
//	printf("%d\n", a);
//	return 0;
//}
//int a=100;
//int main()
//{
//	//int a=10;
//	//局部变量和全局变量的名字建议不要相同-容易误会。产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n",a);
//}

//int num2=20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1=10;//局部变量-定义在代码块（{}）内部的变量
//}
   
//int main()
//{//年龄
//	//20
//	short age=20;//向内存申请2个字节=16个bit位用来存放20
//	 float weight=95.6f;//向内存申请4个字节来存放小数
//	return 0;
//}
////std-标准  standard input output 
//int是整型的意思 main前面的int表示main函数调用返回一个整形值
//int main()//主函数-程序的入口—main函数有且仅有一个
////{ 
//printf("%d\n",sizeof(char));//字节-计算机中的单位 bit-比特位 byte-字节 kb mb gb tb pb
//// printf("%d\n",sizeof(short));
//// printf("%d\n",sizeof(int));//4*8个比特 表达数字范围在0-2的32次方-1
//// printf("%d\n",sizeof(long));
// printf("%d\n",sizeof(long long));
// printf("%d\n",sizeof(float));
// printf("%d\n",sizeof(double));
//  short int age=20;
//
	//这里完成任务
	//在屏幕上输出hello world
	//函数-print f  -打印函数
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西-打招呼
//#include
	//printf("hello world\n");
	//printf("hello world\n");
	//printf("hello world\n");
	//printf("hello world\n");
	//printf("hello world\n");
	//char -字符类型
	//char ch='A';//内存
	//printf("%c\n",ch);//%c-打印字符格式的数据
	//return 0;
	
	//int age=20; 
	
		//printf("%d\n",age);//%d-打印整型十进制数据
		//return 0;

//这种写法是过时的写法
//void main()
//{
//}
//20 55.5 