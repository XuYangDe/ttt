 #define _CRT_SECURE_NO_WARNINGS
//加在源文件的第一行
//字符串类型
#include<string.h>
#include<stdio.h>
int main()
	//EOF-end of file -文件结束标志  -1
////{//字符串的结束标志:'\0' -转义字符 -ASCII码值0 0-数字0 '0'- 字符0 -ASCII值48
//int sz=0;
//	int arr[10]={0};//10个整形元素的数组  10*sizeof(int)
//printf("%d\n",sizeof(arr)); //计算数组元素的个数   个数=数组总大小/每个元素的大小
//sz=sizeof(arr)/sizeof(arr[0]);
//	printf("sz=%d",sz);
//
////{int a=10;
//printf("%d\n",sizeof(int));printf("%d\n",sizeof(a));printf("%d\n",sizeof a);//计算的是变量/类型所占空间的大小 ，单位是字节
////{ //C语言中表示真假 0表示假 一切非0表示真 
////	int a=0;
//	printf("%d\n",a);
//	printf("%d\n",!a);
//
////{//单目操作符 双目操作符 三目操作符
//	int a=10;
//	int b=10;
//	a+b//双目操作符 有2个操作数
////{int a=10;
////a=20;//赋值 ==判断相等
//a=a+10;a+=10;a-=20;a&=2; a=a&2;//+= -= *= /= %= >>= <<= 复合赋值符
//{//位操作 （2进制） & 按位与(含0得0 全1得1） | 按位或（只要有1得1）  按位异或^（不同得1 相同得0）

//	int a=3;//011
//	int b=5;//101
//	printf("%d",a^b);
//	////移（2进制位）操作符  >>右移 <<左移
//	//int a=1;//01 整形1占4个字节 32bit位 a<<1
////	//int b=a<<2;
////	//printf("%d\n",b);printf("%d\n",a);
//	return 0;
//}
//{int a=5%2;//取模 余数
// printf("%d\n",a);
//	return 0;
//}
///*char ch[20];
//float arr2[5];*/
//	int i=0;
//	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//定义一个存放10个整形数字的数组
//printf("%d\n",arr[4]);//用下标的形式访问元素  
// //arr[下标]；
//
//while(i<10)
//{printf("%d\n",arr[i]);
//i++;
//}
//	return 0;
//}
//int main()
//{ int line=0;
//printf("加入比特\n");
//while(line<20000)
//{
//printf("敲一行代码%d\n",line);
// line++;
//} 
//if (line>=2000)
//printf("好offer\n");


//{ int input=0;
//	printf("加入比特\n");
//  printf("你要好好学习吗? (1/0) >:");
//  scanf("%d",&input);//1/0
//  if (input==1)
//	  printf("好offer");
//  else  
//	  printf("卖红薯")
//	/*printf("%c\n",'\132');*//*printf("%c\n",'\x61');*/

	/*printf("%d\n",strlen("c:\test\32\test.c"))*/;//\32-32是2个8进制数字 32zz作为8进制代表的那个10进制数字，作为ASCII码值，对应的字符
//32-->10进制26->作为ASCII值代表的字符
	/*printf("%s\n","\"");*/
//{printf("c:\\test\\32\\test.c");//\t水平制表符
////printf("%c\n",'\'');
//	return 0;
//}
//int main()
//{printf("abc\n");
//return 0;
//}
//int main()
//{char arr1[]="abc";// abc\0
//char arr2[]={'a','b','c','\0'};
//printf("%d\n",strlen(arr1));//strlen-string length-计算字符串长度的
//printf("%d\n",strlen(arr2));//随机值
//	return 0;
//}
////int main()
//{//数据在计算机上存储的时候，存储的是2进制
////
//// char arr1[]="abc";//数组 //"abc"--'a''b''c''\0'--'\0'字符串的结束标志 '\0'值是0
//// //a-97 A-65 ASCII编码 ASCII 码值
//// char arr2[]={'a','b','c','\0'};
//// printf("%s\n",arr1);
//// printf("%s\n",arr2);
////
////"hello bit";
////"";//空字符串
//
//return 0;
//}

//#include<stdio.h>
//enum color
//{blue,red,yellow
//};
//int main()
//	
//
//{enum color Color=blue; Color=red;
//	return 0;
//}
////枚举常量- 枚举-一一列举 性别：男，女 三原色-红 黄 蓝
////枚举关键字  enum
//enum Sex
//{MALE, 
//FEMALE ,
//SECRET
//};
////MALE,SECRET,FEMALE-枚举常量
//int main()
//{ // enum Sex s=MALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	return 0;
//}
////#define 定义的标识符常量
//#define MAX 10
//int main()
//{int arr[MAX]={0};
//printf("%d\n",MAX);
//	return 0;
//}
// int ADD(int x,int y)//ADD函数名   x,y函数的参数  int 函数的返回类 型
//{int Z=x+y;
//return Z;
//}
//int main ()
//{int num1=10;
//int num2=20;
//int sum=0; 
//int a=100;
//int b=200;
// //scanf("%d%d",&num1,&num2);//scanf strcpy不安全的
// /*sum=num1+num2*/;
// sum=ADD(num1,num2);
// sum=ADD(a,b);
// printf("sum=%d\n",sum);
//
//return 0;
//}
//}
//int main()
//{ const  int n=10;//n是变量，但是又有常属性 ，所以我们说n是常变量
//	/*int arr[n]={0};*/
//
//	//const-常属性  const修饰的常变量
////	const  int num=4;
////printf("%d\n",num);
////num=8;
////printf("%d\n",num);
////
////	//字面常量
////	3.14;
////	return 0;
//