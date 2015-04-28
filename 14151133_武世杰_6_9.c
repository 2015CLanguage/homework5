#include<stdio.h>
int main()
{
	printf("请输入15个数：\n");
	int a[16], i, j, max, x = 0, sign, low, high, mid, n;
	for (i = 1; i <= 15; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <= 14; i++)
	{
		max = i;
		for (j = i + 1; j <= 15; j++)
		if (a[max] < a[j])
			max = j;
		x = a[i];
		a[i] = a[max];
		a[max] = x;
	}
	printf("这十五个数由大到小排列为：");
	for (i=1;i<=15;i++)
		printf("%d,",a[i]);
	printf("\n请输入要查找的数：");
	scanf("%d", &x);
	sign = 0;
	low = 1;
	high = 15;
	if (x>a[1]&&x<a[15])
	{
		n=-1;
	}
	else
		while(sign==0&&low<=high)
		{
			mid=(low+high)/2;
			if(x==a[mid])
			{
				n=mid;
				sign=1;
				printf("数字%d,它在数组中位数是：%d\n",x,n);
			}
			else if (x>a[mid])
				high=mid-1;
			else
				low=mid+1;
		}
	if (sign==0&&n==-1)
		printf("找不到这个数\n");
return 0;
}
   
