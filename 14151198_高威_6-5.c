#include <stdio.h>
int a[10];
int n;
int main()
{
	int i,j;
	scanf("%d",&n);
	for (i=0; i<n; i++)  scanf("%d",a+i);
	for (i=0; i<n/2; i++)
	{
		int t=a[i];a[i]=a[n-1-i];a[n-i-1]=t;
	}
	for (i=0; i<n; i++)  printf("%d ",a[i]);printf("\n");
	return 0;
}
