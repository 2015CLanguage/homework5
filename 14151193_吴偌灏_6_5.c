#include<stdio.h>
void main()
{  int i,j,a[5],b[5];
   for(i=0;i<5;i++)
   {scanf("%d",&a[i]);
   }
   for(j=0;j<5;j++)
   {b[j]=a[4-j];
   printf("%-5d",b[j]);
   }  
}
