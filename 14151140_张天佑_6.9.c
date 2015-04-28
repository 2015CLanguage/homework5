#include<stdio.h>
void main()
{
	int i,a[15],n,low=0,high=14,mid;
	printf("按从大到小的顺序输入十五个数:\n");             //输入数组
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
	for(i=0;i<15;i++)
		printf("%5d",a[i]);
	printf("\n");
	printf("输入一个数:\n");                           //输入要查找的数
	scanf("%d",&n);
	printf("%d\n",n);
	mid=(low+high)/2;
	while(a[mid]!=n&&low<=high)                           //利用二分法查找
	{
		if(a[mid]>n)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	printf("%d\n",n);
	if(a[mid]==n)                                      //输出数字在数组中的序号
		printf("序号:%d\n",mid);
	else
		printf("不存在\n");
}
