#include<stdio.h>

void main()
{
	int i,j,k,temp,a[10];
	printf("Please input ten integers.Press Enter after inputing one.\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	{
		k=i;
		for(j=i;j<=9;j++)
			if(a[j]<a[k])
				k=j;
		if(k!=i)
		{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
		}
	}
	printf("The sorted numbers are\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	printf("\n");
}
