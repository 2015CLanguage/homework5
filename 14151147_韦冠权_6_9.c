#include<stdio.h>
int main()
{
	int i, num, top = 14, bot = 0, mid, a[15];
	printf("按由大到小的顺序输入15个数字：");  
	for (i = 0; i<15; i++)  //输入数组
		scanf("%d", &a[i]);
	printf("输入的数据为：\n"); 
	for (i = 0; i<15; i++)   //显示输入的数组
		printf("%3d", a[i]);
	printf("\n");
	printf("输入你想查找的数字：");
	scanf("%d", &num);  //输入想查找的数据
	mid = (top + bot) / 2;  //定义二分法的中间数
	while (bot <= top)  //实现二分法查找数据的循环
	{
		if (num == a[mid])  //当输入的数据正好为中间数时将该数输出，同时结束循环
		{
			printf("已经找到%3d，它是第%3d 个数字\n", num, mid + 1);
			break;
		}
		else if (num>a[mid])  //若数据大于中间数，则向上缩小查找范围
		{
			top = mid - 1;
			mid = (top + bot) / 2;
		}
		else if (num < a[mid])  //若数据小于中间数，则向下缩小查找范围
		{
			bot = mid + 1;
			mid = (top + bot) / 2;
		}
	}
	if (num<a[14]||num>a[0])  //若需要寻找的数据不在数组中，则输出“找不到此数”
		printf("找不到此数\n");
	return 0;
}
