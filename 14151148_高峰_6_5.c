#include<stdio.h>
int main()
{
	int a[5],i;
	printf("请依次输入该数组中的元素\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("原数组为:\n");
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("数组的逆序为：\n");
	for(i=0;i<5;i++)
		printf("%3d",a[4-i]);
	return 0;
}
