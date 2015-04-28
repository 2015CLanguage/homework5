#include <stdio.h>
int main()
{
	int i,t,x,a[100];
	printf("请输入数组中元素个数:\n");
	scanf("%d",&x);
    printf("请依次输入数组中的元素:\n");
	for(i=0;i<x;i++)
	{
		printf("第%d个元素为:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<x/2;i++)
	{
		t=a[i];
		a[i]=a[x-i-1];
		a[x-i-1]=t;
	}
    printf("这个数组按逆序重新存放为:");
	for(i=0;i<x;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
	return 0;
}
