 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ int j=0;
	int i=0;
	for(;i<10;i++)
	{
	for(;j<10;j++)
	{
		printf("hehe\n");//j的值为10一直没有改变

	}
	}
	
	/*for(;;)
	{printf("hehe\n");
	}*/
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int i=0;
//	for(;i<10;i++)
//		printf("%d\n",arr[i]);//10次循环 10次打印 10个元素
// 
	return 0;
}
	/*int i=0;
	for(i=0; i<10;i++)
	{
		if(i=5)
			printf("haha\n");
	printf("hehe\n");
	}
	return 0;
}*/

//{for(int i=1;i<11;i++)
//{if(i==5)
//	continue;
//printf("%d\n",i);
//}
//
//	return 0;
//}

//{ int i=1;//循环变量的初试化
//while(i<=10)//判断
//{if(i==5)
// continue;
//printf("%d\n",i);
//
//	i++;//调整
//}
//	return 0;
//}

//{int  ch=0;
//
//while((ch=getchar())!=EOF)
//{if(ch<'0'||ch>'9')
//continue;
//putchar(ch);
//}
//
//	return 0;
//}

//{ int ch=0;
//  //while((ch=getchar())!=EOF)// EOF -end of file 文件结束标志 
//	 // putchar(ch);
//int ret=0;
//char password[20]={0};
//printf("请输入密码：>");
//scanf("%s",password);//输入密码，并存放在password数组中
////缓冲区还剩余一个'\n' 读取一下'\n'
//while(ch=getchar()!='\n')
//{;
//}
////getchar();
//printf("请确认（Y/N）:>");
//ret=getchar();//Y/N
//if(ret=='Y')
//{
//	printf("确认成功\n");
//}
//else
//	printf("放弃确认\n");
////printf("%d\n",'\n');
//return 0;
//}