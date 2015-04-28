#include<stdio.h>
void main()
{
	int a[10],i,j,m=0;
	printf("请输入十个整数\n");
	for(i=0;i<10;i++)         //循环输入数据
		scanf("%d",&a[i]);
	printf("输入的顺序为\n");
	for(i=0;i<10;i++)         //打印输入顺序
		printf("%5d",a[i]);
	printf("\n");
	for(j=1;j<10;j++)         //排序
	{
		for(i=0;i<10-j;i++)
		{
			if(a[i]>a[i+1])
			{	
				m=a[i+1];
				a[i+1]=a[i];
				a[i]=m;
			}

		}
	}
	printf("输出的顺序为\n");
	for(i=0;i<10;i++)           //打印输出顺序
		printf("%5d",a[i]);
	printf("\n");
}
