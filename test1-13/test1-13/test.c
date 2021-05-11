 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{/* int ch=0;*/
//EOF - end of file 文件结束标志 
 /*while ((ch=getchar())!=EOF)
 {
	 putchar(ch);
	 }*/
	int ret=0;
	char password[20]={0};
	printf("请输入密码:>");
    scanf("%s",password);//输入密码 并存放在password数组中
		printf("请确认（Y/N):>");
	 ret=getchar();//Y/N 
	 if(ret=='Y')
	 {
		 printf("确认成功\n");
	 }
	 else
	 {
		 printf("放弃确认\n");
	 }
	/*printf("%d\n",'\n');*/
	return 0;
}