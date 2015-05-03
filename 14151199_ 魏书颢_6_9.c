#include"stdio.h"
#define t 15
int main()
{
	int a[t],i,x,top,bottom,mid,locat,flag=1,sign;
	printf("请从大到小输入十五个数\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<t)
	{
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
			i++;
		else
			printf("请重新输入该数\n");
	}
	printf("\n");
	for(i=0;i<t;i++)
		printf("%5d",a[i]);
	printf("\n");
    
	printf("请输入要查找的数");
	scanf("%d",&x);
	sign=0;
    top=0;
	bottom=t-1;
	if(x<a[0]||x>a[t-1])
		locat=-1;
	while((!sign)&&(top<=bottom))
		{
			mid=(bottom+top)/2;
		    if(x==a[mid])
		{
			locat=mid;
		    printf("已经找到%d，它的位置为%d\n",x,locat+1);
		    sign=1;
		}
		else if(x<a[mid])
			bottom=mid-1;
		else
			top=mid+1;
		}
	if(!sign||locat==-1)
		printf("不能找到%d\n",x);
	return 0;

}
