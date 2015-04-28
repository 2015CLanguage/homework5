#include<stdio.h>
int main()
{
	int a[15],i,b,min,max,mid,sign;
	printf("按从大到小顺序输入15个数:\n");
	for(i=0;i<15;i++)
	{	
	    scanf("%d",&a[i]);
	}
	sign=0;
	printf("请输入要查找的数:");
	scanf("%d",&b);
	min=0;
	max=15;
	while(sign==0)
	{
	    if((b>a[min])||(b<a[max]))
	    {
		printf("找不到此数");
		sign=1;
	    }
	    else 
	    {
		    mid=(min+max)/2;
			if(b==a[mid])
			{
			    printf("该数的位置为%d",mid+1);
				sign=1;
		    }
			else if(b>a[mid])
			{
			    max=mid-1;
			}
			else
			    min=mid+1;
		}

	}	 
return 0;
}
