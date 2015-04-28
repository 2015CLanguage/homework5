#include<stdio.h>
void main()
{
	int a[5] = {8,6,5,4,1};
	int i,j,k;
	printf("原排列为：\n");
	for (i = 0; i < 5; i++)
		printf("%2d", a[i]);
	printf("\n\n");
	printf("改变后排列为：\n");
	for (j = 0; j < i / 2; j++)
	{
		k = a[j];
		a[j] = a[4 - j];
		a[4 - j] = k;
	}
	for (i = 0; i < 5; i++)
		printf("%2d", a[i]);
	printf("\n");
}
