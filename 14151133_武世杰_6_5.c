#include<stdio.h>
int main()
{
	int n;
	printf("请输入数组中元素的个数(30以内)：",n);
	scanf("%d",&n);
	int a[30],i,x;
	x=0;
	printf("请按原顺序输入要求逆序的整数：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		x=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=x;
	}
	printf("原数组逆序为：");
	for(i=0;i<n;i++)
		printf("%d,",a[i]);
	printf("\n");
	return 0;
}
