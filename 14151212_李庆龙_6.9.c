# include<stdio.h>
int main()
{
	int a[20], n, max, mid, low, obj, i;
	printf("how manny numbers you want to inut:\n");
	scanf_s("%d", &n);
	printf("input %d numbers :", n);
	for (i = 0; i < n; i++)
	{
		printf("number %d is :", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("print the number you want to search:");
	scanf_s("%d", &obj);
	low = 0;
	max = n - 1;
	mid = (low + max) / 2;
	while (1)
	{
		if (a[mid] == obj)
		{
			printf("the number is in %d place.", mid+1);
			break;
		}
		else
		{
			if (a[mid] > obj)
			{
				if (obj > a[mid + 1])
				{
					printf("the object isn't in the list.");
					break;
				}
				low = mid;
				mid = (low + max) / 2;
			}
			else
			{
				if (obj < a[mid - 1])
				{
					printf("the object isn't in the list.");
					break;
				}
				max = mid;
				mid = (low + max) / 2;
			}
			if (a[mid + 1] == obj)
			{
				printf("the number is in %d place.", mid + 2);
				break;
			}

		}
	}
	system("pause");
}
