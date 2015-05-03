#include<stdio.h>
void main()
{
	int i,j,k,mid,a[10]={23,432,1,43,45,56,3,655,55,66};
	printf("请输入十个整数：\n");
	for (i = 0; i < 10; i++)
	{printf("a[%d]=", i);
	scanf("%d",&a[i]);
	}
	printf("\n");
	printf("您输入的数据为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
			if (a[j] < a[k])
				k = j;
			mid = a[i];
			a[i] = a[k];
			a[k] =mid;
	}
	printf("排序后为：\n");
	for (i = 0; i < 10; i++)
		printf("%4d",a[i]);
	printf("\n");
}
