#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k;
	printf("请输入十个数字:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for (j=1;j<9;j++)
		for(i=0;i<9-j;i++)
		{if (a[i]<a[i+1])
		 k=a[i+1];
		 a[i+1]=a[i];
		 a[i]=k;
		}
		printf("按从小到大排列得到的十个数为:\n");
		for (i=0;i<10;i++)
			printf("%d",a[i]);
		printf("\n");
		return 0;
}

