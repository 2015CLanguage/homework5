#include<stdio.h>
int main()
{
	int i,j,a[11],min,x;
	printf("开始依次输入十个整数：\n");
	for(i=1;i<=10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1;i<=9;i++)
	{
		min=i;
		for(j=i+1;j<=10;j++)
			if(a[min]>a[j])
				min=j;
			x=a[i];
			a[i]=a[min];
			a[min]=x;
	}
	printf("这十个数由小到大排序为：\n");
	for(i=1;i<=10;i++)
		printf("%d\n",a[i]);
	return 0;
}
