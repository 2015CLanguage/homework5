#include<stdio.h>
int main()
{
int i,j,temp,t,a[10];
printf("输入10个整数: ");
for(i=0;i<10;i++)
{printf("number%d=",i);
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<9;i++)
{
for(j=i+1;j<=9;j++)
{
t=i;
if(a[t]>a[j])
t=j;
temp=a[i];
a[i]=a[t];
a[t]=temp;
}
}
printf("结果为:");
for(i=0;i<10;i++)
{
printf("%5d",a[i]);
}
return 0;
}
