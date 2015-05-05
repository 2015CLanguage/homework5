#include <stdio.h>
int main()
{
	int i,j,t,a[10];
	printf("请输入十个整数：\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (j=0;j<9;j++)
		for(i=0;i<9-j;i++)
			if (a[i]>a[i+1])
			{t=a[i];a[i]=a[i+1];a[i+1]=t;}
	printf("已排序的十个整数是:\n");
	for (i=0;i<10;i++)
			printf("%d",a[i]);
	printf("\n");
	return 0;
}
