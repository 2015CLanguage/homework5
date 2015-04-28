# homework5
#include<stdio.h>
#define n 5
int main()
{int a[n],i,t;
printf("请输入原数组:\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("输入的原数组为:\n");
for(i=0;i<n;i++)
	printf("%5d",a[i]);
printf("\n");
for(i=0;i<n/2;i++)
	{t=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=t;
	}
printf("转换后的数组为:\n");
for(i=0;i<n;i++)
	printf("%5d",a[i]);
printf("\n");
return 0;
}
