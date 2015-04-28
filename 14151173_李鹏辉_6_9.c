#include<stdio.h>
void main()
{
	int i,j,a[15],n,m,k;
	puts("please input 15 numbers one by one:");
	for(i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
	}
	puts("please input the number you want to find:");
	scanf("%d",&n);
	i=0;
	j=14;
	while(i<=j)
	{
		m=(i+j)/2;
		if(n>a[m]) j=m-1;
		else if(n<a[m]) i=m+1;
		else 
		{
			k=m;
			break;
		}
	}
	if(i>j)
	{
		puts("no answer\n");
	}
	else 
	{
		puts("it's position is:");
		printf("i=%d\n",k+1);
	}
}
