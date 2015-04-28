#include<stdio.h>
int main()
{ 
	int a[5],i,temp;
	printf("请输入5个数：\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("原数据为:\n");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	for(i=0;i<5/2;i++)
	{
		temp=a[i];
		a[i]=a[5-i-1];
		a[5-i-1]=temp;
	}
	printf("\n换序后为:\n");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
