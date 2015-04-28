#include<stdio.h>
#define N 15
int main()
{
    int a[N],i,flag=1,aim,mid,low,high,locate;
	printf("请由大到小输入%d个数\n",N);
	scanf("%d",&a[0]);
	i=1;
    while(i<N)
	{
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
			i++;
		else
			printf("请重新输入\n");
	}
	printf("\n");
	low=0;
    high=N-1;
	mid=(low+high)/2;
	printf("请输入要查找的数:");
	scanf("%d",&aim);
    while(flag)
	{
		if(a[mid]==aim)
		{
			flag=0;
			locate=mid;
			printf("\n所找数%d的位置为：%d\n",aim,locate+1);
		}
		else if(mid==high)
		{
			printf("查无此数\n");
			flag=0;
		}
		else if(a[mid]>aim)
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(a[mid]<aim)
		{
			high=mid-1;
			mid=(low+high)/2;
		}

	}
	return 0;
}
