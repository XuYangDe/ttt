#include<stdio.h>
//int main()
//{
//	short s=0;//������ռ�ڴ�ռ�Ĵ�СΪ2���ֽ�
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));//2
//	printf("%d\n",s);//0 û��ֱ�Ӳμ�����(sizeof�ڲ��ı��ʽû��ֱ�Ӳ������㣩
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
//	//~a����������λ��λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//10000000000000000000000000000001-ԭ��
//	//printf("%d\n",~a);
//	return 0;
////}
//int main()
//{
//	int a=10;
//	//printf("%d",++a);//ǰ��++ ����++��ʹ��
//	printf("%d",a++);//����++����ʹ�ã���++
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
//	//���ú�����ʱ��ģ������Ǻ������ò�����
//	int max=get_max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}
//ѧ��
//����һ���ṹ������-�������� struct STU
//struct STU//���� int float
//{//��Ա����
// char name[20];
// int age;
// char id[20];
//};
//
//int main()
//{//ʹ��struct  STU������ʹ�����һ��ѧ������ s1 ,����ʼ��
//	struct  STU s1={ "XuYang",24,"202022616111"};
//	struct STU* ps=&s1;//
//	/*printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);*/
//	//printf("%s\n",(*ps).name);
//	//printf("%d\n",(*ps).age);
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	//�ṹ��ָ��->��Ա��
////	return 0;
////}
//int main()
//{ char a=3;//00000000000000000000000000000011 ����С�ֽڽ��нض�
////00000011-a
//  char b=127;//00000000000000000000000001111111-b
//  //00000000000000000000000000000011-a
//  //
//  //00000000000000000000000001111111-b
//  //00000000000000000000000010000010
//  char c=a+b;//10000010-c
//             //11111111111111111111111110000010����
//             //11111111111111111111111110000001-����
//             //10000000000000000000000001111110-ԭ��
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
//	int *p=&a;//p��ָ�����  ���ͽ�int *
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
//	//int *p=arr;//������-��Ԫ�صĵ�ַ
//	char *p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//       *(p+i)=1;
//	}
//	return 0;
//}
//int main()
//{   //int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int *p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p=20;
////	return 0;
////}
//int main()
//{
//	int arr[10]={0};
//	int  *p=arr;
//	int i=0;;
//	for(i=0;i<12;i++)//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	*p=20;//ָ��ָ��Ŀռ��ͷ�
//	//��α���Ұָ�룺 1 ָ���ʼ�� 2 С��ָ��Խ�� 3 ָ��ָ��ռ��ͷż�ʹ��NULL 4ָ��ʹ��֮ǰ�����Ч��
//	return 0;
//}
//int main()
//{
//	//δ��ʼ����ָ�����
//	int *p;//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
//	*p=20;
//	return 0;
//}
//����Խ�絼�µ�Ұָ������
//int main()
//{
//	int a[10]={0};
//	int i=0;
//	int *p=a;
//	for(i=0;i<=12;i++)
//	{
//		//*p=i;
//	//	p++;//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ p����Ұָ��
//   *p++=i;
//
////	}
////return 0;
////}
//int *test ()
//{
//	int arr[10]={0};
//	return arr;
////	int a=10;//a�Ǿֲ�����
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
//	//int *p=&a;//��ʼ��
//	//int *p=NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
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
//	//strlen-���ַ�������
//	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1 �ݹ�ķ�ʽ2
//   char arr[]="bit";// b i t \0
//	int len=my_trlen(arr);
//	printf("%d\n",len);
//	return 0;
//
//}
//int main()
//{
//	int arr[10]={0};
//	printf("%p\n",arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n",arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//
//	printf("%p\n",&arr);//
//	printf("%p\n",&arr+1);
//	1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	sizeof(arr)-sizeof(������)-��������ʾ������������-sizeof(������)���������������Ĵ�С
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
//int * *ppa=&pa;//ppa���Ƕ���ָ��
//**ppa=20;
// printf("%d\n",**ppa);
//  printf("%d\n",a);
//	return 0;
//}
//
//ָ������-����-���ָ�������
////����ָ��-ָ��
//int main()
//{   
//	int a=10;
//	int b=20;
//	int c=30;
//	//��������-�������
//	//�ַ�����-����ַ�
//	//ָ������-���ָ��
//	int* arr2[3]={&a,&b,&c};//ָ������
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//  printf("%d ",*(arr2[i]));
//	}
//	return 0;
//}
//����һ��ѧ��-һЩ����
//����
//����
//�绰
//�Ա�
// struct �ṹ��ؼ��� Stu-�ṹ���ǩ struct Stu-�ṹ������
//struct Stu
//{
//  //��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3;//����һ���ṹ������
////s1,s2,s3��3����ȫ�ֵĽṹ�����
// typedef struct Stu
//{
//  //��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//-Stu ������
//int main()
//{
//struct Stu s1;//�ṹ������Ĵ���-�ֲ��ṹ�����
//Stu s2={"����",24,"123545","Ů"};//
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
//  //��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//-Stu ������
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
//	 Stu s={"��˹",40,"1234343543","��"};
//	 //��ӡ�ṹ������
//	 //Print 1��Print2�ĸ����� 2 �ṹ�崫��Ҫ���ṹ��ĵ�ַ
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
