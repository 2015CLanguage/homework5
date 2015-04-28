#include<stdio.h>
int main()
{
int a[15],i,n,min=0,max=14,mid,s=0;
printf("输入十五个整数，按从大到小输入:\n");
for(i=0;i<15;i++)
{scanf("%d",&a[i]);}

printf("输入一个数进行查找:\n");
scanf("%d",&n); 
	
while(s!=1)
{
	mid=(min+max)/2;
	if(n==a[mid])
		{s=1;		
		printf("位置是第%d位\n",mid);}
	if(n>a[mid])
		max=mid-1;
	if(n<a[mid])
		min=mid+1;
	if(mid>14||mid<0)
		{s=1;		
		printf("查无此数");}
}
		return 0;
}
