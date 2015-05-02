#include<stdio.h>
void main()
{
	int i,j,s[15],n,a,b;
	for(i=0;i<15;i++)
	{
		scanf("%d",&s[i]);
	}
	puts("number to be found is:");
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
