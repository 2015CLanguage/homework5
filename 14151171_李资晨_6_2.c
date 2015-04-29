#include "stdio.h"
int main()
{
	int a[10], i, j, t , n, k;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (t = 0; t < 10; m++)
	{
		k = a[t];
		for (i = t; i < 10; i++)
		{
			j = t;
			if (a[i] < k)
			{
				k = a[i];
				j = i;
			}
			n = a[t];
			a[t] = a[j];
			a[j] = n;
		}
	}
	for (i = 0; i < 10;i++)
		printf("%6d", a[i]);
	printf("\n");
	return 0;
}
