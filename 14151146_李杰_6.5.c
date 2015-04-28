#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("Please input number:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("The numbers:\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<5;i++)
	{
		b[i]=a[4-i];
	}
	printf("The changed numbers:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	printf("\n");
	return 0;
}
