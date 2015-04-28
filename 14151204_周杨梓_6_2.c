#include<stdio.h>
int main()
{
	int i,j,a[11],temp;
	printf("请输入十个整数");
	for(i=1;i<=10;i++)
	{
		printf("请输入第%d个整数:",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	printf("排序前的数组为:");
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
    for(i=1;i<=9;i++)
	{
        for(j=i+1;j<=10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("排序后的数组为:");
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
