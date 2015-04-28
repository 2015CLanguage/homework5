#include<stdio.h>
int main()
{
	int i, j,t,n,m, a[10];
	for (i = 0; i<10; i++)
		scanf_s("%d", &a[i]);
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		int min = a[i],min_i=i;
		for (j = i + 1; j < 10; j++)
		{
			if (min>a[j]){
				min = a[j];
				min_i = j;
			}
			
		}
		min = a[i];
		a[i] = a[min_i];
		a[min_i] = min;
	}
	for (i = 0; i<10; i++)
		printf("%d\n", a[i]);
	return 0;
}
