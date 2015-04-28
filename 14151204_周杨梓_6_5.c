#include<stdio.h>
int main()
{
    int a[6],temp,i;
	printf("请输入5个整数");
	for(i=1;i<=5;i++)
	{
		printf("请输入第%d个整数:",i);
		scanf("%d",&a[i]);
	}
	printf("您输入的数组为:");
	for(i=1;i<=5;i++)
	{
		printf("%2d",a[i]);
	}
	printf("\n");
	for(i=1;i<=5/2;i++)
	{
        temp=a[i];
		a[i]=a[5+1-i];
		a[5+1-i]=temp;
	}
	printf("逆序存放后的数组为:");
	for(i=1;i<=5;i++)
	{
		printf("%2d",a[i]);
	}
	printf("\n");
	return 0;
}
