#include "stdio.h"
int main()
{
    float a[8],b[8];
    int i;
    for(i=0;i<8;i++)
        scanf("%f",&a[i]);
	for(i=0;i<8;i++)
		b[7-i]=a[i];
	for(i=0;i<8;i++)
		printf("%8.2f",b[i]);
	printf("\n");
	return 0;
}
