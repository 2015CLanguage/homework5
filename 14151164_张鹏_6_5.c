#include<stdio.h>
#define N 5
int main()
{
	int a[N],i;
	for (i=0;i<=N-1;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (i=N-1;i>=0;i--)
		printf("%7d",a[i]);
	printf("\n");
	return 0;
}
