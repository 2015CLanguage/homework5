#include"stdio.h"
#define n 5
int main()
{
	int a[n],i,t;
	printf("请输入数组:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("数组逆序为:");
	for(i=0;i<n;i++)
		printf("%-3d",a[i]);
	printf("\n");
	return 0;
}
