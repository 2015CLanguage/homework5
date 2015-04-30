#include<stdio.h>
#define N 5
int main()
{
	int a[N],i,t;
	printf("Please enter array a:\n");
	for(i=0;i<=N-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The original array is:");
	for(i=0;i<=N-1;i++)
	{
		printf("%5d",a[i]);
	}
	for(i=0;i<N/2;i++)
	{
		t=a[N-1-i];
		a[N-1-i]=a[i];
		a[i]=t;
	}
	printf("\nNow the array is:");
	for(i=0;i<=N-1;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	return 0;
}
