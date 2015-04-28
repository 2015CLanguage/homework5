#include "stdafx.h"
void main()
{
	int a[15], i, n;
	for (i = 0; i < 15; i++)
		scanf_s("%d", &a[i]);
	printf_s("请输入您想查询的数字:");
	scanf_s("%d", &n);
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
	if (i == -1 || i == 15)printf_s("无此数\n");
	else printf_s("%d为第%d个数\n", n, i + 1);
}
