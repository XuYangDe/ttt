 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
//{char ch='w';
//char *pc=&ch;
//*pc='a';
////printf("%c\n",ch);
//printf("%d",sizeof(pc));
	//int a=10;//4���ֽ�
	//int *p=&a;//ȡ��a�ĵ�ַ //pΪһ������ָ�����-��ĵ�ַָ���������
	////��һ�ֱ�����������ŵ�ַ�� -ָ�����
 //printf("%p\n",&a);
 // printf("%p\n",p);
 // *p=20;//�����ò�����-�ҵ�p��ָ��Ķ���a
 // printf("%d",a);
 return 0;
}
	/*int ADD(int x,int y)
{int z=0;
z=x+y;
return z;
}*/
//���Ե�ʱ�����һ�������ڲ�ȥ��Fn+F11
//void test()
//{
//	 static int a=1;  //a��һ����̬�ľֲ�����
//	 //static���ξֲ����� �ֲ��������������ڱ䳤
//static����ȫ�ֱ���  �ı��˱����������� -�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//static���κ��� -Ҳ�Ǹı��˺�����������-��׼ȷ
//�ı��˺�������������
////�ⲿ��������->�ڲ���������
////�����ⲿ����
////extern int Add(int,int);
////#define MAX 100//#define �����ʶ������ 
////#define ���Զ����-������
//int Max(int x,int y)
//{if(x>y)
//return x;
//else 
//	return y;
//}
////��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{int a=10;
//int b=20;
////����
//int max=Max(a,b);
//	printf("max=%d\n",max);
//	//��ķ�ʽ
//	max=MAX(a,b);
//	printf("max=%d\n",max);
//
//

	/*int a=MAX;*/
////{//extern-�����ⲿ����
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
//	//typedef-���Ͷ���-�����ض���
////{ register int a=10;//����� a����ɼĴ�������
//int a=10;//�ֲ����� -�Զ�����    int ����ı������з��ŵ�  signed  unsigned
////struct -�ṹ��ؼ��� union-������ ������
	
//{int  a=10;
//int b=20;
//int sum=0;
//	int arr[10]={0};
//arr[4];//[]-�±����ò�����
////& * . ->
//
//sum=ADD(a,b);//()-�������ò�����
//printf("%d\n",sum);
////{int a=10;
//int b=20;
//int max=0;
//max=(a>b?a:b);// ���������� ��Ŀ������
//printf("%d\n",max);
//	// 0�� ��0 �� &&�߼��� ͬʱΪ���Ϊ�� ||�߼��� ֻҪΪ���Ϊ��
//int a=3;
//int b=3; 
//int c=a||b;
//printf("%d\n",c);

//{ int a=(int)3.14;// double->int
//{int a=10;
//int b=a++;//����++ ,��ʹ�ã���++ b 10 a 11
//int c=++a;//ǰ��++�� ��++ ��ʹ��
//printf("%d\n%d\n",c,a); 
////{
//	int a=0;
//	int b=~a;//~-����2���ƣ�λȡ�� b���з��ŵ�����  ���λΪ1��ʾ�Ǹ���
//	printf("%d",b);//ԭ�� ���� ���� �������ڴ��д���ǲ��� ʹ�ô�ӡ�����������ԭ��
//	//����-1�õ����� ����õ�ԭ�밴λȡ��
//
////{int a=10;
//int arr[]={1 ,2 ,3, 4 ,5 ,6 };
//	printf("%d\n",sizeof(a));//sizeof��һ��������
//printf("%d\n",sizeof(arr));//���������С ��λ���ֽ�
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
//	printf("�ϴ�ֵ�ǣ�%d\n",num1);
//else printf("�ϴ�ֵ�ǣ�%d\n",num2);
//return 0;
//	
//}