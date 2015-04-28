#include<stdio.h>
void main()
{
	int a[10],i,j=9,m=0;
	printf("请输入十个整数\n");
	for(i=0;i<10;i++)         //循环输入数据
		scanf("%d",&a[i]);
	printf("输入的顺序为\n");
	for(i=0;i<10;i++)         //打印输入顺序
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<5;i++)    //改变对应数据的位置
	{
		m=a[i];
		a[i]=a[i+j];
		a[i+j]=m;
		j=j-2;
	}
	printf("输出的顺序为\n");
	for(i=0;i<10;i++)          //打印输出顺序
		printf("%5d",a[i]);
	printf("\n");
}
