#include<stdio.h>
int main()
{
	int a[11][11],i,j;
	a[1][1]=1;
	for(i=2;i<=10;i++)
	{
		a[i][1]=1;
		a[i][i]=1;
		for(j=2;j<=i-1;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	printf("杨辉三角形:");
	for(i=1;i<=10;i++)
	{   printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}
