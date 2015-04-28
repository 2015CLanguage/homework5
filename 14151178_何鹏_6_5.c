#include "stdio.h"
void main()
{
    float a[10],b[10];         //此处定义10个，可随具体情况进行更改
    int i;
    for(i=0;i<10;i++)
        scanf("%f",&a[i]);
	for(i=0;i<10;i++)
		b[10-i-1]=a[i];         //此处10为a中数据个数
	for(i=0;i<10;i++)
		printf("%8.2f",b[i]);
	printf("\n");
}
