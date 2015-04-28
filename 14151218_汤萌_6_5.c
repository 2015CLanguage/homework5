#include<stdio.h>
int main()
{
	int a[5], i, j;
	printf("请分别输入五个数字：\n");
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("原数列为：\n");
	for (i=0; i<5; i++)
	{
		printf("%5d", a[i]);
	}
	for (i=0; i<2; i++)
	{
		j=a[i];
		a[i]=a[4-i];
		a[4-i]=j;
	}
	printf("\n现数列为：\n");
	for (i=0; i<5; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	return 0;
}
