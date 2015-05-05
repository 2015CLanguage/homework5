#include<stdio.h>
void main()
{
	printf("请从大到小输入15个数字\n ");
	int a[15],i,index,mid,left,right;
	for (i = 0; i < 15; i++)
		scanf_s("%d",&a[i]);
	printf("请输入要查找的数\n");
	scanf_s("%d",& index);
	mid = 7;
	left = 0;
	right = 14;
	while ((right-left)>=0)
	{

		if (index>a[left] || index < a[right])
		{
			printf("查无此数！");
			break;
		}
		if (index == a[mid])
		{
			printf("第%d个", mid+1);
			break;
		}

		else
		{
			if (index > a[mid])
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}
			else
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
		}

	}

}
