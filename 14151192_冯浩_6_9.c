#include<stdio.h>
int main()
{
	int a[1],i,x,r,bottle,middle,top,sign;
	char c;
	printf("请按从小到大的顺序输入15个整数：\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<15)
		{scanf("%d",&a[i]);
		 if (a[i]<a[i-1])
			 printf("输入错误，请再次输入整数:\n");
		 else
			 i++;
		}
	for(i=0;i<15;i++)
		printf("%5d",a[i]);
	printf("\n");
	

	printf("\n请输入要查找的数字：");
	scanf("%d",&x);
	bottle=0;
	top=14;
	sign=0;
	if(x<a[0]||x>a[14])
		r=-1;
	while((!sign)&&(bottle<=top))
		{middle=(bottle+top)/2;
		 if(x==a[middle])
			{printf("要找的整数%d是第%d个\n",x,middle+1);
			 sign=1;}
		 else if(x<a[middle])
			 top=middle-1;
		 else
			 bottle=middle+1;}
	if(!sign||r==-1)
		 printf("找不到该数字\n");
	return 0;
}
