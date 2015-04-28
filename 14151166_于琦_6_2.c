#include<stdio.h>
int main()
{
    int a[10],i,j;
	for (i=1;i<=10;i++)
	{printf("a[%d]=",i);
	scanf("%d",&a[i]);}
	int x;
	for (i=1;i<10;i++)    
	{for (j=i+1;j<=10;j++)
	{if (a[i]>a[j])
			{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
	}
	}
	for (i=1;i<=10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
