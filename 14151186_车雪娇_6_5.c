#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,t;
    printf("enter array a:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("array a:\n");
    for(i=0;i<5;i++)
        printf("%4d",a[i]);
    for(i=0;i<5/2;i++)
    {
        t=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=t;
    }
    printf("\nNow,array a:\n");
    for(i=0;i<5;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}
