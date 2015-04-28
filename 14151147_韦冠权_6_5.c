#include<stdio.h>
int main()
{
	int i,a[5];
	printf("往数组a中按顺序输入5个整数:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);  //接收元素输入
	printf("数组a顺序排列为:");
	for(i=0;i<5;i++)  //将元素按下标顺序排列输出
		printf("%4d",a[i]);
	printf("\n数组a逆序排列为:");
	for(i=4;i>=0;i--)  //将元素按下标逆序排列输出
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
