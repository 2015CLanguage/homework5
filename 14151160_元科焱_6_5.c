#include <stdio.h>
int main ()
{
	int a[5];
	int m,i;
	printf ("input 5 number:\n");
	for (i=0;i<5;i++)
		scanf ("%d",&a[i]);
	printf ("array:\n");
	for (i=0;i<5;i++)
	{
		printf ("%5d",a[i]);
	}
	printf ("\n");
	for (i=0;i<3;i++)
	{
		m=a[i];
		a[i]=a[4-i];
		a[4-i]=m;
	}
	printf ("NEW array:\n");
	for (i=0;i<5;i++)
	{
	printf ("%5d",a[i]);
    }
	printf ("\n");
	return 0;
}

