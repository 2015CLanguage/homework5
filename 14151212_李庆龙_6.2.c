# include<stdio.h>
int main()
{
	int a[10], i, j,k;
	printf("input 10 numbers:");
	for (i = 0; i < 10; i++)
	{
		printf("第%d个数字为：", i + 1);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%3d", a[i]);
	system("pause");
}
