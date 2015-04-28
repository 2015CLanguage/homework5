#include "stdafx.h"
#include "stdio.h"

int main()
{
	int s[15],i,k,a,y,n=-1,m=0;
	printf("请按照从大到小顺序输入15个互不相同的数（数字之间由空格隔开）：\n");
	for(i=0;i<15;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("请输入您要找的一个数：\n");
	scanf("%d",&a);
	i=0;
	k=14;
	if(a<s[0]||a>s[14])
	{
		m=-2;
	}
	else
	{
		while(n=-1)
		{
			if(a==s[i]) {n=i;break;}
			else if(a==s[k]) {n=k;break;}	
			else 
			{
				y=(i+k)/2;
				if(a>s[y]) {i=y;}
				else {k=y;}
			}
			if(i==k-1) break;
		}
	}
	if(m<0||n<0)
		printf("无此数！\n");
	else
		printf("数%d是数组中第%d个元素的值\n",a,n+1);
	return 0;
}

