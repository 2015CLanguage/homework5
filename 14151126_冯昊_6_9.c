#include<stdio.h>
void main()
{
	//将输入的数字从大到小排序
	int i, j, k, mid, a[15];
	printf("请输入15个整数：\n");
	for (i = 0; i < 15; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	printf("您输入的数据为：\n");
	for (i = 0; i < 15; i++)
	{
		printf("%6d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 15; i++)
	{
		k = i;
		for (j = i + 1; j < 15; j++)
			if (a[j] > a[k])
				k = j;
		mid = a[i];
		a[i] = a[k];
		a[k] = mid;
	}
	printf("排序后为：\n");
	for (i = 0; i < 15; i++)
		printf("%4d", a[i]);
	//数据的查找与输出
	int x, signal, min, max, middle, n=0;
	printf("\n");
	printf("请输入要查找的数：");
	scanf("%d", &x);
	signal = 0;
	min = 0;
	max = 14;
	if (x>a[0] && x<a[14])
	{
		n =-1;
	}
	else
		while (signal == 0 && min < max)
		{
		    if(x==a[min]){signal = 1;printf("数字%d是数组中第%d位数\n", x, min+1);break;}
		    if(x==a[max]){signal = 1;printf("数字%d是数组中第%d位数\n", x, max+1);break;}
		middle = (min + max) / 2;
		if (x == a[middle])
		{
			n = middle+1;
			signal = 1;
			printf("数字%d是数组中第%d位数\n", x, n);
		}

		else if (x>a[middle])
			max = middle - 1;
		else
			min = middle + 1;
		}
	if (signal == 0 || n ==-1)
		printf("此数组不含该数\n");
	return 0;
}
