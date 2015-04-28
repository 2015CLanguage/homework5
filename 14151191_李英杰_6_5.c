#include<stdio.h>
#define n 5
int main()
{
	int a[n],i,t;
	printf("请输入数列\n");
	for(i=0;i<n;i=i+1)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("原顺序为:\n");
	for(i=0;i<n;i=i+1)
		printf("%5d",a[i]);
	for(i=0;i<=n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("\n逆转后顺序为:\n");	
	for(i=0;i<n;i=i+1)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
