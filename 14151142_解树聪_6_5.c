#include<stdio.h>
#define n 5
int main()
{
	int a[n],i,temp;
	printf("请按提示输入数据\n");
	for(i=0;i<n;i=i+1)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("原顺序是:\n");
	for(i=0;i<n;i=i+1)
		printf("%4d",a[i]);
	for(i=0;i<=n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("\n逆序是:\n");	
	for(i=0;i<n;i=i+1)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
