# include<stdio.h>
int main()
{
	int a[10], b[10], i, j;
	printf("print 10 numbers in order:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	j = 9;
	for (i = 0; i < 10; i++)
	{
			b[j] = a[i];
			j--;		
	}
	printf("the numbers transfered are:");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", b[i]);
	}
	system("pause");
}
