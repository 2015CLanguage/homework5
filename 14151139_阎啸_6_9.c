#include<stdio.h> 
void main() 
{ 
 int a[16],i,t,j; 
 printf("请输入15个数 :\n"); 
 for(j=1;j<16;j++) 
  scanf("%d",&a[j]); 
 printf("\n"); 
 for(j=1;j<16;j++) 
  for(i=j+1;i<16;i++)
   if (a[j]<a[i]) 
    { 
     t=a[j]; 
     a[j]=a[i]; 
     a[i]=t; 
    }
puts("请输入要查找的数");
scanf("%d",&t);
putchar('\n');
i=1;
j=15;
while (i<j)
{
if (t<=a[(i+j)/2]) j=(i+j)/2;
else i=(i+j)/2+1;
}
if (a[i]!=t) puts("无此数");
else printf("%d%d\n",t,i);
}
