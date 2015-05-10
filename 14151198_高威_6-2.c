Enter file contents here#include <stdio.h>
int a[10];

int main()
{
	int i,j;
	for (i=0; i<10; i++)  scanf("%d",a+i);
	for (i=0; i<10; i++)
	  for (j=i+1; j<10; j++)
	    if (a[i]>a[j])
	    {
	    	int t=a[i];a[i]=a[j];a[j]=t;
	    }
	for (i=0; i<9; i++)  printf("%d ",a[i]); printf("%d\n",a[i]);
	return 0;
}
