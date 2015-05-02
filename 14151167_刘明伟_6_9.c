Enter file contents here
# include <stdio.h>
int main()
{
	int a[15], m = 1, n = 15, i, x;
	printf("请由大至小输入15个整数：\n");
	for (i = 1; i <= 15; i++)
	{
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	printf("请输入一个整数:");
	scanf("%d", &x);
	
	while (a[(m + n) / 2] != x)
	{
		if (m == n)
		{
			printf("无此数");
			break;
		}
		if (a[(m + n) / 2] < x)
		{
			n = (m + n) / 2 - 1;
		}
		else
		{
			m = (m + n) / 2 + 1;
		}
	}
	if(a[(m + n) / 2] == x)
		printf("这个数的元素位数为：%d\n", (m+n)/2);
	return 0;
}
