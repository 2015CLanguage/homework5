#include "stdafx.h"	
#include "stdio.h"

int main()
{
	int s[10],i,n,a;
	printf("请输入十个整数（以空格隔开）：\n");
	for(i=0;i<10;i++)
		scanf("%d",&s[i]);
	for(n=1;n<10;n++)
	{
		for(i=n;i<10;i++)
		{
			if(s[i]<s[n-1])
			{
				a=s[n-1];
				s[n-1]=s[i];
				s[i]=a;
			}
		}
	}
	printf("这十个数从小到大排列为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",s[i]);
	}
	return 0;
}
