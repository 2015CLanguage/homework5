#include<stdio.h>
int main()
{
    int a[5]={8,6,5,4,1},b[5],i;
    for (i=0;i<5;i++)
        b[4-i]=a[i];
    for (i=0;i<5;i++)
        printf("%d",b[i]);
	printf("\n");
    return 0;
}
