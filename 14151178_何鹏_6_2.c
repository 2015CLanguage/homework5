#include "stdafx.h"
void main()
{
	int a[10], i, j, m , n, k;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (m = 0; m < 10; m++)
	{
		k = a[m];
		for (i = m; i < 10; i++)
		{
			j = m;
			if (a[i] < k)
			{
				k = a[i];
				j = i;
			}
			n = a[m];
			a[m] = a[j];
			a[j] = n;
		}
	}
	for (i = 0; i < 10;i++)
		printf_s("%6d", a[i]);
	printf_s("\n");
}
