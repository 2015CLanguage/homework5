#include<stdio.h>

void main()
{
	int i,a[5],temp;
	printf("Please input numbers.Press Enter after each one.\n");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	for(i=0;i!=(4-i);i++)
	{
		temp=a[i];
		a[i]=a[4-i];
		a[4-i]=temp;
	}	
	printf("The reversed array is\n");
	for(i=0;i<=4;i++)
		printf("%d ",a[i]);
	printf("\n");
}
