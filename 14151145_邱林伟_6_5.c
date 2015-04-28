#include<stdio.h>
void main()
{
	int a[100],b[100],i,n;
	printf("请输入数组元素个数(不大于100):");
	scanf("%d",&n);
	printf("请输入数组:");
	for(i=0;i<n;i++)
	{printf("a[%d]=",i+1);
	scanf("%d",&a[i]);
	}
	printf("原数组为:\n");
    for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)     //再建立一个数组存放它的逆序数组
	   b[i]=a[n-1-i];
    printf("逆序列为:");
    for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
}
