#include<stdio.h>
int main()
{
int i,n;
printf("数的个数为：");
scanf("%d",&n);
printf("\n");
printf("输入%d个数：",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%5d",&a[i]);
}
printf("\n");
printf("结果为：");
for(i=n-1;i>=0;i--)
{
printf("%5d",a[i]);
}
return 0;
}
