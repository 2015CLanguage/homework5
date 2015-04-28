#include<stdio.h>
int main()
{int i,j,m,y,a[11];
printf("请输入十个数字:\n");
for(i=1;i<=10;i++)
{printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\n");
printf("原数为：\n");
for(i=1;i<=10;i++)
printf("%5d",a[i]);
	   printf("\n");
for(i=1;i<=9;i++)
{m=i;
for(j=i+1;j<=10;j++)
if(a[m]>a[j])
m=j;
y=a[i];
a[i]=a[m];
a[m]=y;
}
printf("数的顺序为:\n");
for(i=1;i<=10;i++)
printf("%5d",a[i]);
printf("\n");
return 0;
}
