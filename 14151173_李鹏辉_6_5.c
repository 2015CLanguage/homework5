#include<stdio.h>
void main()
{
	int i,j,temp,n,a[10];
	puts("please input the number of your datas:");
	scanf("%d",&n);
	puts("please input the data one by one:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1-i;j<n;j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	puts("the result is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
