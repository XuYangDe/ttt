 #define _CRT_SECURE_NO_WARNINGS
//����Դ�ļ��ĵ�һ��
//�ַ�������
#include<string.h>
#include<stdio.h>
int main()
	//EOF-end of file -�ļ�������־  -1
////{//�ַ����Ľ�����־:'\0' -ת���ַ� -ASCII��ֵ0 0-����0 '0'- �ַ�0 -ASCIIֵ48
//int sz=0;
//	int arr[10]={0};//10������Ԫ�ص�����  10*sizeof(int)
//printf("%d\n",sizeof(arr)); //��������Ԫ�صĸ���   ����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//sz=sizeof(arr)/sizeof(arr[0]);
//	printf("sz=%d",sz);
//
////{int a=10;
//printf("%d\n",sizeof(int));printf("%d\n",sizeof(a));printf("%d\n",sizeof a);//������Ǳ���/������ռ�ռ�Ĵ�С ����λ���ֽ�
////{ //C�����б�ʾ��� 0��ʾ�� һ�з�0��ʾ�� 
////	int a=0;
//	printf("%d\n",a);
//	printf("%d\n",!a);
//
////{//��Ŀ������ ˫Ŀ������ ��Ŀ������
//	int a=10;
//	int b=10;
//	a+b//˫Ŀ������ ��2��������
////{int a=10;
////a=20;//��ֵ ==�ж����
//a=a+10;a+=10;a-=20;a&=2; a=a&2;//+= -= *= /= %= >>= <<= ���ϸ�ֵ��
//{//λ���� ��2���ƣ� & ��λ��(��0��0 ȫ1��1�� | ��λ��ֻҪ��1��1��  ��λ���^����ͬ��1 ��ͬ��0��

//	int a=3;//011
//	int b=5;//101
//	printf("%d",a^b);
//	////�ƣ�2����λ��������  >>���� <<����
//	//int a=1;//01 ����1ռ4���ֽ� 32bitλ a<<1
////	//int b=a<<2;
////	//printf("%d\n",b);printf("%d\n",a);
//	return 0;
//}
//{int a=5%2;//ȡģ ����
// printf("%d\n",a);
//	return 0;
//}
///*char ch[20];
//float arr2[5];*/
//	int i=0;
//	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//����һ�����10���������ֵ�����
//printf("%d\n",arr[4]);//���±����ʽ����Ԫ��  
// //arr[�±�]��
//
//while(i<10)
//{printf("%d\n",arr[i]);
//i++;
//}
//	return 0;
//}
//int main()
//{ int line=0;
//printf("�������\n");
//while(line<20000)
//{
//printf("��һ�д���%d\n",line);
// line++;
//} 
//if (line>=2000)
//printf("��offer\n");


//{ int input=0;
//	printf("�������\n");
//  printf("��Ҫ�ú�ѧϰ��? (1/0) >:");
//  scanf("%d",&input);//1/0
//  if (input==1)
//	  printf("��offer");
//  else  
//	  printf("������")
//	/*printf("%c\n",'\132');*//*printf("%c\n",'\x61');*/

	/*printf("%d\n",strlen("c:\test\32\test.c"))*/;//\32-32��2��8�������� 32zz��Ϊ8���ƴ�����Ǹ�10�������֣���ΪASCII��ֵ����Ӧ���ַ�
//32-->10����26->��ΪASCIIֵ������ַ�
	/*printf("%s\n","\"");*/
//{printf("c:\\test\\32\\test.c");//\tˮƽ�Ʊ��
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
//printf("%d\n",strlen(arr1));//strlen-string length-�����ַ������ȵ�
//printf("%d\n",strlen(arr2));//���ֵ
//	return 0;
//}
////int main()
//{//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
////
//// char arr1[]="abc";//���� //"abc"--'a''b''c''\0'--'\0'�ַ����Ľ�����־ '\0'ֵ��0
//// //a-97 A-65 ASCII���� ASCII ��ֵ
//// char arr2[]={'a','b','c','\0'};
//// printf("%s\n",arr1);
//// printf("%s\n",arr2);
////
////"hello bit";
////"";//���ַ���
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
////ö�ٳ���- ö��-һһ�о� �Ա��У�Ů ��ԭɫ-�� �� ��
////ö�ٹؼ���  enum
//enum Sex
//{MALE, 
//FEMALE ,
//SECRET
//};
////MALE,SECRET,FEMALE-ö�ٳ���
//int main()
//{ // enum Sex s=MALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	return 0;
//}
////#define ����ı�ʶ������
//#define MAX 10
//int main()
//{int arr[MAX]={0};
//printf("%d\n",MAX);
//	return 0;
//}
// int ADD(int x,int y)//ADD������   x,y�����Ĳ���  int �����ķ����� ��
//{int Z=x+y;
//return Z;
//}
//int main ()
//{int num1=10;
//int num2=20;
//int sum=0; 
//int a=100;
//int b=200;
// //scanf("%d%d",&num1,&num2);//scanf strcpy����ȫ��
// /*sum=num1+num2*/;
// sum=ADD(num1,num2);
// sum=ADD(a,b);
// printf("sum=%d\n",sum);
//
//return 0;
//}
//}
//int main()
//{ const  int n=10;//n�Ǳ������������г����� ����������˵n�ǳ�����
//	/*int arr[n]={0};*/
//
//	//const-������  const���εĳ�����
////	const  int num=4;
////printf("%d\n",num);
////num=8;
////printf("%d\n",num);
////
////	//���泣��
////	3.14;
////	return 0;
//