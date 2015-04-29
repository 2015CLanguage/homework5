#include "stdio.h"
int main()
{
	int a[15], i, n;
	for (i = 0; i < 15; i++)
		scanf("%d", &a[i]);
	printf("输入要查询的数字:");
	scanf("%d", &n);
	if (n>a[7])
	{
		for (i = 6; i >= 0; i--)
		if (n == a[i])break;
	}
	else
	{
		for (i = 7; i < 15; i++)
		if (n == a[i])break;
	}
	if (i == -1 || i == 15)printf("查无此数\n");
	else printf("%d为第%d个数\n", n, i + 1);
	return 0;
}

