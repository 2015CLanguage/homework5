#include<stdio.h>
#define N 5
int main()
{
	int i,a[N],t;
	
	printf("输入数组元素：\n");//接受输入
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("原始数组为：\n");//打印显示
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	
	for(i=0;i<N/2;i++)//逆序排列
	{
		t=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=t;
	}
	
	printf("\n逆序排列后的数组为：\n");//输出逆序列
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
