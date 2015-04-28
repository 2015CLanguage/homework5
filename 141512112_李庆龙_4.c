# include<stdio.h>
int main()
{
	int a[20], i, m,k,j=0;
	printf("how many numbers in yout list:");
	scanf_s("%d", &m);
	for (i = 0; i < m; i++)
	{
		printf("number %d is", i);
		scanf_s("%d", &a[i]);
	}
	k = a[0];
	for (i = 0; i < m-1; i++)
	{
		if (k >= a[i + 1])
		{
			k = a[i + 1];
			j = i + 1;
		}
	}
	printf("the minum is in %d place.\n", j+1);
	a[j] = a[0];
	a[0] = k;
	printf("the new list is£º");
	for (i = 0; i < m; i++)
	{
		printf("%3d", a[i]);
	}
	system("pause");
}
