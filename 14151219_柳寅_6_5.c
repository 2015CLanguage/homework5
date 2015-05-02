#include<stdio.h>
int N=5;
int main()
{int i,temp,a[N];
 printf("输入数组:\n");
 for(i=0;i<N;i++) scanf("%d ",&a[i]);
 for(i=0;i<N/2;i++)
 {temp=a[i];a[i]=a[N-i-1];a[N-i-1]=temp;}
 printf("\n重排后的数组:\n");
 for(i=0;i<N;i++)  printf("%4d",a[i]);  
 return 0;} 
