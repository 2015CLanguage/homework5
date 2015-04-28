#include<stdio.h>
int main()
{
	int i, j=0, a[11], x;
	printf("请分别输入十个整数，回车确定输入：\n");
	for (i=0; i<10; i++)
		scanf("%d", &a[i]);
	for (i=0; i<10; i++)
	{
		a[10]=a[i];
		x=i;
		for (j=i; j<10; j++)
		{
			if (a[10]>a[j])
			{
				a[10]=a[j];
				x=j;
			}
		}
		a[x]=a[i];
		a[i]=a[10];
	}
	printf("输入的数从小到大排列为：\n");
	for (i=0; i<10; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}
