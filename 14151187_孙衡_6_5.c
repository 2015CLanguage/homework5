#include"stdio.h"
int main()
{
int m,n,i,j,t;
float a[100],b[100];
printf("请输入数组元素个数：");
scanf("%d",&t);
printf("请按顺序输入原数组：\n");
for(m=0;m<t;m++)
{
scanf("%f",&a[m]);
}
for(i=0;i<t;i++)
{
b[i]=a[i];
}
for(j=0;j<t;j++)
{
a[j]=b[t-j-1];
}
printf("原数组逆序：");
for(n=0;n<t;n++)
{
printf("%f ",a[n]);
}
printf("\n");
return 0;
}
