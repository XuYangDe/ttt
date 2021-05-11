 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{ int max;int i=0; int arr[10]={1,2,3,4,5,6,7,8,9,10};

for(;i<10;i++)
	if(arr[i]>arr[i+1])
		max=arr[i];
	else max=arr[i+1];
	printf("max=%d\n",max);
	
	return 0;
}