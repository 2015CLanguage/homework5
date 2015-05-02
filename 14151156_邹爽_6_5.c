#include<stdio.h>
int main()
{
	int a[4];
	int i,t;
	printf("输入数组\n");
	for(i=0;i<=4;i=i++)
		scanf("%d",&a[i]);
	for(i=0;i<2;i++)
	{
		t=a[i];
	    a[i]=a[4-i];
		a[4-i]=t;}
	printf("逆序数组:\n");
	for(i=0;i<=4;i++)
		printf("%d ",a[i]);
	return 0;
}
