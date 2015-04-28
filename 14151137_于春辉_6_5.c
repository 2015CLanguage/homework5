#include <stdio.h>
#define N 5
int main()
{int a[N],i,t;
   printf("输入五个数据 a:\n");
   for (i=0;i<N;i++)
	   scanf("%d",&a[i]);
   printf("数据排列为a:\n");
   for (i=0;i<N;i++)
       printf("%4d",a[i]);
   for (i=0;i<N/2;i++)
   { t=a[i];
     a[i]=a[N-i-1];
     a[N-i-1]=t;
   }
   printf("\n现在新的排序，逆序为 a:\n");
   for (i=0;i<N;i++)
	   printf("%4d",a[i]);
   printf("\n");
   return 0;
}
