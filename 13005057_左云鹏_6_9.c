#include<stdio.h>
int main()
{
	int n,i,j,s,t,a[16];
	int bot,top,mid,loca,sign;
	
	printf("请由大到小输入十五个整数：\n");//接受数组输入
	for(i=1;i<=15;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("数组为:\n");
	for(i=1;i<=15;i++)
		printf("%5d",a[i]);
	printf("\n");
	
	printf("请输入要查找的数：\n");//输入要查找的数
	scanf("%d",&n);
	
	sign=0;
	top=1;
	bot=15;
	if(n<a[1]||n>a[15])//初步判断输入
		loca=-1;
	while((!sign)&&(top<=bot))//二分法查找位置
	{
		mid=(bot+top)/2;
		if(n==a[mid])
		{
			loca=mid;
			printf("所在位置为：%d\n",mid);
			sign=1;
		}
		else if(n<a[mid])
			bot=mid-1;
		else
			top=mid+1;
	}
	if(!sign||loca==-1)//未找到的标记条件
		printf("未找到该数!\n");
	return 0;
	}
