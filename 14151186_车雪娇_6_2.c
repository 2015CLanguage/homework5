#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,min,t,a[11];
    printf("enter data:\n");
    for(i=1;i<11;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<11;i++)
        printf("%5d",a[i]);
    printf("\n");
    for(i=1;i<10;i++)
    {
        min=i;
        for(j=i+1;j<11;j++)
            if(a[min]<a[j]) min=j;
            t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("\nThe sorted numbers:\n");
    for(i=1;i<11;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}
