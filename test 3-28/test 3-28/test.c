#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int Fac1(int n)
//{ int i=0;
//int ret=1;
////	for(i=1;i<=n;i++)
////		ret*=i;
////	return ret;
////}
// int Fac2(int n)
// { 
//	 if (n<=1)
//		 return 1;
//	 else
//		 return n*Fac2(n-1);
//
// }
//int main()
//{ 
//	//��n�Ľ׳�
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fac2(n);
//	printf("%d\n",ret);
//	return 0;
////}
//int count=0;
//int  Fib(int n)
//{
//	if (n==3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n<=2)
//		return 1;
////	else 
////		return Fib(n-1)+Fib(n-2);
////	//50
////}
//int Fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{ 
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//	
//}
//
//int main()
//	//쳲���������
//	// 1 1 2 3 5 8
//{
//	//���n��쳲������� 
//	int n=0;
//	int ret=0;
//	//TDD-������������
//	scanf("%d",&n);
//	ret=Fib(n);
////	printf("ret=%d\n",ret);
////	
////	return 0;
////}
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//int main()
//{
//	test(1);
////	return 0;
////}
//int main()
//{
//	//����һ������-�������-10�� 
//	//int arr[10]={1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5]={'a',98}; //�������ʽ������ָ������Ĵ�С
//	//char arr3[5]="ab";//ok
//	char arr4[]="abcdef";
//	printf("%d\n",sizeof(arr4));//7 
//	//sizeof����arr4��ռ�ռ�Ĵ�С 
//	//7��Ԫ�� char  7*1=7
//	printf("%d\n",strlen(arr4));//6
//	//���ַ����ĳ��� \0��ֹͣ \0�����ַ��������� '\0'֮ǰ���ַ�����
//
//	// 1 strlen ��sizeofû��ʲô����
//	// 2 strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//	//3 sizeof������� ���� ���� �Ĵ�С -��λ���ֽ�-������
//	return 0;
//
//}
//int main()
//{
//	char arr1[]="abc";// a b c \0
//	char arr2[]={'a','b','c'};// a b c
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr2));// ��arr2��������\0�ĳ��� �����������֪ ���������ֵ
//
//
//return 0;
//}
//int main()
////{ int i=0;
////
////	char arr[]="abcdef";
////	int len=strlen(arr);
////	/*printf("%c",arr[3]);*/
////	for(i=0;i<len;i++) //strlenĬ�Ϸ��ص���һ���޷������ε�һ��ֵ
////	{
////		printf("%c ",arr[i]);
////	}
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}
//int  main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	//��ӡ��ַ�õ���%p
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//
//	return 0;
////}
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//    
//		//ȷ������
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n ",i,j,&arr[i][j]);
//		}
//         printf("\n");
//	}
//
//	//char ch[5][6];
//	//int arr[]={1,2,3,4};
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}};//��ά������в���ʡ��  ����ʡ��
//	return 0;
//} 
// void bubble_sort(int arr[],int sz)
// {
//		//ȷ��ð�����������
//		int i=0;
//		for(i=0;i<sz-1;i++)//����sz=10
//		{   
//			int  flag=1;//������һ��Ҫ����������Ѿ�����
//			//ÿһ��ð������
//			int j=0;
//			for(j=0;j<sz-1-i;j++)
//			{
//				if(arr[j] >arr[j+1])
//				{
//					int tmp=arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=tmp;
//					flag=0;//���������������ʵ����ȫ����
//					  
//				}
//			}
//			if (flag==1)
//			{
//		       break;
//			}
//	
//		}
// }
//
//		//ð������   10��Ԫ�� 9��ð������  ÿһ�� ��һ�˽���9�������ıȽ� �ڶ��˽���8�������ıȽ�
//
//		// 10 9 8 7 6 5 4 3 2 1
// 
//int main()
//{
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//Ԫ�ظ���
//	//��arr���������ų�����
//	bubble_sort(arr,sz);//ð�������� //arr������ ���Ƕ�����arr���д��� ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ    
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7}; 
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);//ȡ����������ĵ�ַ
//	printf("%p\n",&arr+1);
//	/*int sz=sizeof(arr)/sizeof(arr[0]);*/
//	//����������Ԫ�ص�ַ ����2������ sizeof(arr) ���������������Ĵ�С ��λ���ֽ�
//	//2  &������ ������������������ &������ ȡ��������������ĵ�ַ ��������������� ���е�����������ʾ��Ԫ�صĵ�ַ
//	/*printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%d\n",*arr);*/
//	return 0;
//}
int main()
{
	return 0;
}