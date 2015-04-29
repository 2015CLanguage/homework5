#include<stdio.h>
void main()
{
	int i,j,s[15],n,a,b;
	puts("请由大到小输入十五个数:");
	for(i=0;i<15;i++)
	{
		scanf("%d",&s[i]);
	}
	puts("要查询的数是:");
	scanf("%d",&n);
	i=0;
	j=n-1;
	while(i<=j)
	{
		a=(i+j)/2;
		if(n>s[a]) j=a-1;
		else if(n<s[a]) i=a+1;
		else 
		{
			b=a;
			break;
		}
	}
	if(i>j)
	{
		puts("no answer");
	}
	else 
	{
		puts("it's position is:");
		printf("i=%d\n",b+1);
	}
}
