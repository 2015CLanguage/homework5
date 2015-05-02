#include"stdio.h"
void main()
{
	int a[10];
	int i,j,t;
	printf("Input 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<10;i++)
	{
		
		for(j=i+1;j<10;j++)
		{
		if(a[i]>a[j])
		{
			
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
		}
	}
		printf("The sorted numbers:\n");
		for(i=0;i<10;i++)
			printf("%5d",a[i]);
		printf("\n");

}
