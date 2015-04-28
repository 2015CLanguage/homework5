#include<stdio.h>
int main()
{
	int a[5],i,k;
	printf("请输入五个数字:\n");
	for (i=0;i<5;i++)
	   scanf("%d",&a[i]);
	for (i=0;i<2;i++)
	{
		k=a[4-i];
		a[4-i]=a[i];
		a[i]=k;
	}
	printf("重新排列的五个数字是:\n");
	for (i=0;i<5;i++)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
