#include "stdafx.h"
#include "stdio.h"

int main()
{
	int s[20],n,a,b,i,m;
	printf("请输入您要逆序的数组的长度：\n");
	scanf("%d",&a);
	printf("请输入您的数组（数字之间用空格隔开）：\n");
	for(n=0;n<a;n++)
	{
		scanf("%d",&s[n]);
	}
	printf("数组{");
	for(n=0;n<a;n++)
	{
		printf("%d",s[n]);
	}
	printf("}按逆序重新存放为：\n{");
	b=a/2;
	for(i=0;i<b;i++)
	{
		m=s[i];
		s[i]=s[a-1-i];
		s[a-1-i]=m;
	}
	
	for(i=0;i<a;i++)
	{
		printf("%d ",s[i]);
	}
	printf("}");
	return 0;
}
