#include"stdio.h"
int main()
{
	int num[15]={1,3,5,8,9,12,15,18,22,23,34,54,67,84,96},a=0,b=15,n;
	printf("请输入你要查找的数字:");
	scanf("%d",&n);
	while(a!=b)	
	{
		if(num[(a+b)/2]<=n)
			a=(a+b+1)/2;
		else
			b=(a+b)/2;
	}
	if(n==num[a-1])
		printf("该数是数组中第%d个元素",a);
	else
		printf("无此数");
	return 0; 
}
