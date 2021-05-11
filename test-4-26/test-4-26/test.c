#include<stdio.h>
//int main()
//{
//	short s=0;//短整形占内存空间的大小为2个字节
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));//2
//	printf("%d\n",s);//0 没有直接参加运算(sizeof内部的表达式没有直接参与运算）
//	/*int a=0;
//	char b='w';
//	int arr[10]={0};
//	printf("%d\n",sizeof a);
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof b);
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(arr));
////	printf("%d\n",sizeof(int[10]));*/
////	return 0;
////}
//int main()
//{    int a=11;//00000000000000000000000000001011 
//              //00000000000000000000000000000100
// a= a|(1<<2);
// printf("%d\n",a);//15
// a=a&(~(1<<2));
//  printf("%d\n",a);//11
//
//
//             //000000000000000000000000000001111
//            //1111111111111111111111111111111011
//           // 0000000000000000000000000000000100
//        //
//             //000000000000000000000000000001011 
//	/*int a=0;*/
//	//~a按（二进制位）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//	//printf("%d\n",~a);
//	return 0;
////}
//int main()
//{
//	int a=10;
//	//printf("%d",++a);//前置++ ，先++后使用
//	printf("%d",a++);//后置++，先使用，再++
//	return 0;
//}
//int main()
//{
//	int a=(int)3.14;
//	return 0;
//}
//int main ()
//{
// int a=0;
// int b=0;
// int c=a||b;
// printf("%d\n",c);
// return 0;
//	
//}
//int main()
//{   int max=0;
//	int a=10;
//	int b=20;
//	if(a>b)
//		max=a;
//	else 
//		max=b;
//	max=(a>b?a:b);
//	/*if(a>5)
//		b=3;
//	else 
//		b=-3;
//	b=(a>5?3:-3);*/
//	return 0;
//}

//int main()
//{
//	int a[10]={0};
//	a[4]=10;
//	1+2;
//	return 0;
//}
//int get_max(int x,int y)
//{
//	return x>y?x:y;
//
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//调用函数的时候的（）就是函数调用操作符
//	int max=get_max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}
//学生
//创建一个结构体类型-类型名叫 struct STU
//struct STU//类型 int float
//{//成员变量
// char name[20];
// int age;
// char id[20];
//};
//
//int main()
//{//使用struct  STU这个类型创建了一个学生对象 s1 ,并初始化
//	struct  STU s1={ "XuYang",24,"202022616111"};
//	struct STU* ps=&s1;//
//	/*printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);*/
//	//printf("%s\n",(*ps).name);
//	//printf("%d\n",(*ps).age);
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	//结构体指针->成员名
////	return 0;
////}
//int main()
//{ char a=3;//00000000000000000000000000000011 挑最小字节进行截断
////00000011-a
//  char b=127;//00000000000000000000000001111111-b
//  //00000000000000000000000000000011-a
//  //
//  //00000000000000000000000001111111-b
//  //00000000000000000000000010000010
//  char c=a+b;//10000010-c
//             //11111111111111111111111110000010补码
//             //11111111111111111111111110000001-反码
//             //10000000000000000000000001111110-原码
//  //-126
//
//   printf("%d\n",c);
//
//	return 0;
//}
//int main()
//{
//    int a=10;
//	int b=20;
//	int c=b+a+3;
//
//
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int *p=&a;//p是指针变量  类型叫int *
//	return 0;
//}
//int main()
//{
//	/*printf("%d\n",sizeof(char *));
//	printf("%d\n",sizeof(int *));
//	printf("%d\n",sizeof(short *));
//	printf("%d\n",sizeof(double *));
//	return 0;*/
//	int a=0x11223344;
//	char *pc=&a;
//	*pc=0;
//   /* int *pa=&a;
//	*pa=0;*/
//	//char *pc=&a;
//	//printf("%p\n",pa);
//	//printf("%p\n",pc);
//	return 0;
//}
//int main()
//{
//	int a=0x11223344;
//	int *pa=&a;
//	char *pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//
////}
//int main()
//{
//	int arr[10]={0};
//	//int *p=arr;//数组名-首元素的地址
//	char *p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//       *(p+i)=1;
//	}
//	return 0;
//}
//int main()
//{   //int a;//局部变量不初始化，默认是随机值
//	int *p;//局部的指针变量，就被初始化随机值
//	*p=20;
////	return 0;
////}
//int main()
//{
//	int arr[10]={0};
//	int  *p=arr;
//	int i=0;;
//	for(i=0;i<12;i++)//当指针指向的范围超出数组arr的范围时，p就是野指针
//	{
//         p++;
//	}
//	return 0;
////}
//int *test()
//{
//	int a=10;
//	return &a;
//}
//int main()
//{
//	int *p=test();
//	*p=20;//指针指向的空间释放
//	//如何避免野指针： 1 指针初始化 2 小心指针越界 3 指针指向空间释放即使置NULL 4指针使用之前检查有效性
//	return 0;
//}
//int main()
//{
//	//未初始化的指针变量
//	int *p;//局部变量不初始化，里面默认放的是一个随机值
//	*p=20;
//	return 0;
//}
//数组越界导致的野指针问题
//int main()
//{
//	int a[10]={0};
//	int i=0;
//	int *p=a;
//	for(i=0;i<=12;i++)
//	{
//		//*p=i;
//	//	p++;//当指针指向的范围超出数组arr的范围时 p就是野指针
//   *p++=i;
//
////	}
////return 0;
////}
//int *test ()
//{
//	int arr[10]={0};
//	return arr;
////	int a=10;//a是局部变量
////	return &a;//
//}
//int  main()
//{
//	int *p=test();
//	printf("%d\n",*p);
//	return 0;
////}
//int main()
//{
//	//int a=10;
//	//int *p=&a;//初始化
//	//int *p=NULL;//NULL-用来初始化指针的，给指针赋值
//	int a=10;
//	int *pa=&a;
//	*pa=20;
//	pa=NULL;
//	
////	return 0;
////}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int *p=&arr[9];
//	/*for(i=0;i<sz;i++)
//	{
//     printf("%d ",*p++); 
//	
//	}*/
//	for(i=0;i<5;i++)
//	{
//     printf("%d ",*p); 
//	 p-=2;
//	
//	}
//	return 0;
//}
//int main()
//{  char ch[5]={0};
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);
//	return 0;
////}
//int my_trlen(char *str)
//{
//	char *start=str;
//	 char *end =str;
//	 while(*end!=0)
//	 {
//	end++;
//	 }
//	 return end -start;
//}
//
//int main()
//{
//	//strlen-求字符串长度
//	//递归-模拟实现了strlen-计数器的方式1 递归的方式2
//   char arr[]="bit";// b i t \0
//	int len=my_trlen(arr);
//	printf("%d\n",len);
//	return 0;
//
//}
//int main()
//{
//	int arr[10]={0};
//	printf("%p\n",arr);//地址-首元素的地址
//	printf("%p\n",arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//
//	printf("%p\n",&arr);//
//	printf("%p\n",&arr+1);
//	1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	sizeof(arr)-sizeof(数组名)-数组名表示的是整个数组-sizeof(数组名)计算的是整个数组的大小
//
//////	return 0;
////}
//int main()
//{
//	int arr[10]={0};
//	int *p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//
//		*(p+i)=i;
//	}
//	for(i=0;i<10;i++)
//	{
//	  printf("%d ",*(p+i));
//	}
//
//	/*for (i=0;i<10;i++)
//	{
//
//		printf("%p   ==========%p\n",p+i,&arr[i]);
//	}*/
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int *pa=&a;
//int * *ppa=&pa;//ppa就是二级指针
//**ppa=20;
// printf("%d\n",**ppa);
//  printf("%d\n",a);
//	return 0;
//}
//
//指针数组-数组-存放指针的数组
////数组指针-指针
//int main()
//{   
//	int a=10;
//	int b=20;
//	int c=30;
//	//整型数组-存放整型
//	//字符数组-存放字符
//	//指针数组-存放指针
//	int* arr2[3]={&a,&b,&c};//指针数组
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//  printf("%d ",*(arr2[i]));
//	}
//	return 0;
//}
//描述一个学生-一些数据
//名字
//年龄
//电话
//性别
// struct 结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//struct Stu
//{
//  //成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3;//定义一个结构体类型
////s1,s2,s3是3三个全局的结构体变量
// typedef struct Stu
//{
//  //成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//-Stu 是类型
//int main()
//{
//struct Stu s1;//结构体变量的创建-局部结构体变量
//Stu s2={"徐扬",24,"123545","女"};//
//return 0;
////}
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct s S;
//	char *pc;
//};
//int main()
//{  char arr[]="hello,bit\n";
//	struct T t={"hehe",{110,'W',"hello",3.13},arr};
//	printf("%s\n",t.ch);//hehe
//	printf("%s\n",t.S.arr);//hello
//		printf("%lf\n",t.S.d);//3.13
//		printf("%s\n",t.pc);//hello,bit
//  return 0;
////}
//
// typedef struct Stu
//{
//  //成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//-Stu 是类型
//  void Print1(Stu s)
//{ printf("name:%s\n",s.name);
// printf("age:%d\n",s.age);
// printf("tele:%s\n",s.tele);
// printf("sex:%s\n",s.sex);
//}
//  void Print2(Stu *ps)
//   {printf("name:%s\n",ps->name);
// printf("age:%d\n",ps->age);
// printf("tele:%s\n",ps->tele);
// printf("sex:%s\n",ps->sex);
//  
//   }
// int main()
// {
//	 Stu s={"里斯",40,"1234343543","男"};
//	 //打印结构体数据
//	 //Print 1和Print2哪个更好 2 结构体传参要传结构体的地址
//	 Print1(s);
//	  Print2(&s);
//
//	 return 0;
//
//// }
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//int a=10;
//int b=20;
//int ret=0;
//ret=Add(a,b);
//return 0;
//}
