#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("请输入数字：\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("逆序数字为：\n");
	for(i=4;i>=0;i--)
	printf("%-3d",a[i]);
	printf("\n");
	return 0;
}
