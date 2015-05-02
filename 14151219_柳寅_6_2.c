#include<stdio.h>
int main()
{int i,j,min,temp,a[10];
  printf("输入数据:\n");
  for(i=1;i<=10;i++)
   {printf("a[%d]=",i);
   scanf("%d",&a[i]);}
  for(i=1;i<=9;i++)
   {min=i;
    for(j=i+1;j<=10;j++) if(a[min]<a[j]) min=j;
    temp=a[i];a[i]=a[min];a[min]=temp;}
  printf("\n排序后的数组:\n");
  for(i=1;i<=10;i++) printf("%5d",a[i]);  
  return 0;}  
