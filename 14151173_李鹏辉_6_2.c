#include<stdio.h>
void main()
{
	int i,j,k,temp,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		if(k!=i)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}	
	}
	for(i=0;i<10;i++)
	{
		printf("%3d\n",a[i]);
	}
}
