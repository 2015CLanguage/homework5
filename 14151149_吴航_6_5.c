#include <stdio.h>
int main()
{int a[6],i,m,n;
   printf("输入五个数据 a:\n");
   for (i=0;i<5;i++)
	   scanf("%d",&a[i]);
   printf("数据排列为a:\n");
  for (i=0;i<5;i++)
  {
	  printf("%4d",a[i]);
  }
 m=a[4];
 n=a[3];
 a[4]=a[0];
 a[3]=a[1];
 a[1]=n;
 a[0]=m;
   
   printf("\n现在新的排序，逆序为 a:\n");
   for (i=0;i<5;i++)
	   printf("%4d",a[i]);
   printf("\n");
   return 0;
}
