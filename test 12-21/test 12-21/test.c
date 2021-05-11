 #define _CRT_SECURE_NO_WARNINGS
;//是语句-空语句
#include<stdio.h>
int main()
{ int ch=0;
while((ch=getchar())!=EOF)
	//ctrl+z  EOF-end of file->-1
	putchar(ch);

//{ char ch=getchar();
//   putchar(ch);
//   printf("%c\n",ch);
////{ int i=0;
//while(i<=10)
//{  i++;
//	if(i==5)
//		continue;//continue的作用是将本次循环结束 continue后面的代码不再执行 来到下一次循环 判断能不能进行
//	printf("%d\n",i);
//   
//}
//while(i<=10)
//{ 
//	if(i==5)
//		break;
//	printf("%d\n",i);
//   i++;
//}
	/*while(1)
  printf("hehe");*/
//int main()
//{int day;
//scanf("%d",&day);
//switch(day)
//{
//case 1:
//
//case 2:
//case 3:
//case 4:
//case 5:
//	printf("工作日\n");
//	break;
//case 6:
//case 7:
//	printf("休息日\n");
//	break;
//default:
//printf("输入错误\n");
//break;
//
//}
//case 1: 
//    printf("星期1\n"); 
//	break;
//case 2:
//	 printf("星期2\n");
//	 break;
//case 3:
//	 printf("星期3\n"); 
//	 break;
//case 4:
//	 printf("星期4\n");
//	 break;
//case 5:
//	 printf("星期5\n");
//	 break;
//case 6:
//	 printf("星期6\n");
//	 break;
//case 7:		
//	 printf("星期天\n");
//	 break;
//}
//...
 
//int main()
//{int  arr[100];int i=0;
//for(i=0;i<100;i++)
//
//	arr[i]=i+1;
//
//
//for(i=0;i<100;)
//{if(arr[i]%2==1)
//printf("%d是素数\n",arr[i]);
//i++;
//}

//printf("未成年\n");
//if(a==1)
//	if(b==2)
//		printf("呵呵\n");
//	else printf("哈哈\n");
//	/*int age=12;
////if(age<18)
//{
//	printf("未成年\n");
//printf("不能谈恋爱\n");
//}
//  
//else
//{if(age>=18&&age<28)
//printf("青年\n");
//else printf("壮年\n");
//}*/
//else if(age>=18&&age<28)
//	printf("青年\n");
//else printf("壮年\n");//可以省略
// 
//if(age<18)
//	printf("未成年\n");
//else
//	printf("成年\n");
 /*if(age<18)
	 printf("未成年\n");*/
	return 0;
}