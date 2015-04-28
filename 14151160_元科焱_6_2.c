#include <stdio.h>
int main ()
{
	int a[10];
	int j,m,i,p;
	printf ("input 10 number:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		for (j=i+1;j<10;j++)
		{
		p=i;
		if (a[p]>a[j])
		{
		p=j;
		m=a[i];
		a[i]=a[p];
		a[p]=m;
		}
		}
	}
		printf ("answer:\n");
	for (i=0;i<10;i++)
	{
		printf ("%5d\n",a[i]);
	}
    return 0;
}
