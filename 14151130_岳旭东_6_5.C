#include<stdio.h>
#define N 5
int main()
{
	int a[N],i,temp;
	printf("输入一个数组:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("原数组是：\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	for(i=0;i<N/2;i++)
	{
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
		printf("\n新的数组：\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
