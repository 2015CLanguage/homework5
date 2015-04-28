#include<stdio.h>
void main()
{
	int a[5],i,t;
	printf("输入一个数组:\n");               //输入一个五元素数组
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<2;i++)                        //交换数组中的元素
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	printf("逆序为:\n");
	for(i=0;i<5;i++)                        //输出逆序
		printf("%5d",a[i]);
	printf("\n");
}
