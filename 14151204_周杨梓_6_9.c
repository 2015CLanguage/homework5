#include<stdio.h>
int main()
{
    int a[16],top,i,n,flag,bot,distance;
	printf("请按由大到小的顺序输入15个整数");
	for(i=1;i<=15;i++)
	{
		printf("请输入第%d个整数:",i);
		scanf("%d",&a[i]);
	}
	printf("您输入的数组为:");
	for(i=1;i<=15;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("请任意输入要查找的一个整数:");
	scanf("%d",&n);
	flag=0;
	for(top=16,bot=0,distance=top-bot;distance>1;)
	{
	    if(n>a[bot+distance/2])
		{
            top=bot+distance/2;
            distance=top-bot;
		}
		else if(n==a[bot+distance/2])
		{
			flag=bot+distance/2;
            break;
		}
		else
		{
            bot=bot+distance/2;
			distance=top-bot;
		}
	}
    if(flag!=0)
	{
		printf("该数是第%d个元素的值\n",flag);
	}
	else
	{
		printf("无此数\n");
	}
	return 0;
}
