 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{/* int ch=0;*/
//EOF - end of file �ļ�������־ 
 /*while ((ch=getchar())!=EOF)
 {
	 putchar(ch);
	 }*/
	int ret=0;
	char password[20]={0};
	printf("����������:>");
    scanf("%s",password);//�������� �������password������
		printf("��ȷ�ϣ�Y/N):>");
	 ret=getchar();//Y/N 
	 if(ret=='Y')
	 {
		 printf("ȷ�ϳɹ�\n");
	 }
	 else
	 {
		 printf("����ȷ��\n");
	 }
	/*printf("%d\n",'\n');*/
	return 0;
}