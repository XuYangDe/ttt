#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int  main()
//{
//	double a=5.0/2;//商2余1 a=2 如果/两端都是整数 执行的都是整数除法
//	// 如果得到小数 /两端至少有一个小数
//	int  b=5%2;//  操作数必须都是整数
//	printf("a=%lf\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a=16;
//	//>>--右移操作符  移动的是二进制位 10000 
//	int b=a>>2;//算术移位-右移
//	printf("%d\n",b);
//
////}
//int main()
//{
//	int a=-1;
//	//整数的二进制表示有：原码 反码 补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001-原码
//	//符号位不变 其他位按位取反
//	//11111111111111111111111111111110-反码
//	//反码+1得到补码
//	//11111111111111111111111111111111-补码
//	int b=a>>2;
//	printf("%d",b); //1111-8421=15   b=-1;
//	return 0;
////}
//int main()
//{  
//	int a=5;
//	int b=a<<1;
//	//00000000000000000000000000000101
//	//左移-左边丢弃 右边补0
//	printf("%d",b);
//	return 0;
//}
 //int main()
 //{

	 ////&-按2进制位与 只要有一个为0就为0 两个同时为1才为1
	 //int a=3;
	 //int b=5;
	 //int c=a&b;
	 //// 00000000000000000000000000000011
	 //// 00000000000000000000000000000101
	 //// 00000000000000000000000000000001-1
	 //printf("%d",c);
	 // | 按2进制位或
	// int a=3;
	// int b=5;
	// // 00000000000000000000000000000011
	// // 00000000000000000000000000000101
	// // 00000000000000000000000000000111
	// //两个同时为0才为0 只要1个为1就为1
	 /*int c=a|b;
	 printf("%d\n",c);
	 return 0;*/
 //}
//int main()
//{   int a=3;
//    int b=5;
//	//按二进制位异或
//	// 00000000000000000000000000000011
//	// 00000000000000000000000000000101
//	// 相同为0 相异为1
//	// 00000000000000000000000000000110
//	int c=a^b;
////	printf("%d",c);
////	return 0;
////}
//int main()
//{
//	int a=3;
//	int b=5;
//	//int tmp=0;//临时变量
//	printf("before:a=%d b=%d\n",a,b);
//	//tmp=a;
//	//a=b;
//	//b=tmp;
//	//加减法-可能会溢出
//	//a=a+b;// a 8
//	//b=a-b;// b 3 
//	//a=a-b;//a=5
//	//异或的方法
//	a=a^b;//a 6
//	b=a^b;// a 110 b 101  b=011-3
//	a=a^b;// a 110 b 011  a 101 -5
//	printf("after:a=%d b=%d\n",a,b);
//	return 0;
//}
////求一个整数存储在内存中的二进制中1的个数
//int main()
//{   int i=0;
//	int num=0;
//	int count=0;
//	scanf("%d",&num);//3-011  -1
//	
//	for(i=0;i<32;i++)
//	{
//    if( (num>>i)&1==1)
//	 count++;
//	}
//	printf("%d\n",count);
	//32个比特位
	//num&1==1  
	//00000000000000000000000000000011
	//00000000000000000000000000000001
	//00000000000000000000000000000001
	//统计num的补码中有几个1
	//123 - %10得到3 -/10 去掉3
	/*while(num)
	{    
		if(num%2==1)
      count++;
		num=num/2;
	}*/

	//printf("%d\n",count);
//	return 0;
////}
//int  main()
//{
//	int a=0;
//	if(!a)
//	{
//		printf("呵呵\n");
//	}
//	//a=a+2;
//	//a+=2;//复合赋值符
//	//a=a>>1;
//	//a>>=1;
//	//a=a&1;
//	//a&=1;
//	//printf("%d",!a);
//	return 0;
////}
//int main()
//{
//	int a=10;
//	int *p=&a;//取地址操作符
//	*p=20;//解引用操作符
//	return 0;
//}
//sizeof 计算的变量所占内存空间的大小-单位是字节
//int main()
//{
//	int a=10;
//	char c='r';
//	char *p=&c;
//	int arr[10]={0};
//	printf("%d\n",sizeof a);//4个字节
//	printf("%d\n",sizeof (int));
//	printf("%d\n",sizeof(c));//1个字节
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(p));//4个字节
//	printf("%d\n",sizeof(char *));
//	printf("%d\n",sizeof(arr));//40个字节
//	printf("%d\n",sizeof(int [1]));
//	return 0;
//}