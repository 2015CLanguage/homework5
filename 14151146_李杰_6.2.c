#include<stdio.h>
void main()
{
	int i,j,min,p,t,num[10];
	printf("Please input 10 numbers：\n");
	for(i=0;i<10;i++)//数据输入
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<9;i++)//排序
	{
		for(j=i+1,min=num[j];j<10;j++)
		{
			if(num[j]<min)//找到最小数
			{min=num[j];p=j;}
		}
		if(num[i]>min)//判断并交换
		{t=num[i];num[i]=min;num[p]=t;}
	}
	printf("The sorted numbers:");
	for(i=0;i<10;i++)
		printf("%d ",num[i]);
}
