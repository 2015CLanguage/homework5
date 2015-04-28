#include<stdio.h>
int main()
{
	int a[5],i,n,t;
	n=5;
	printf("请输入一个含有五个数的数组");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("原数组为：");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<=n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("现数组为:");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n");



return 0;
}
