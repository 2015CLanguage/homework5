#include<stdio.h>
int main()
{
int a[15],i,j,n;
printf("输入十五个整数，按从大到小输入:\n");
for(i=0;i<15;i++)
{	scanf("%d",a[i]);
}
printf("输入一个数进行查找:\n");
	scanf("%d",n);

int min=1,max=15,mid,s=0;
mid=(min+max)/2;	
if(n>a[0]||n<a[15])
		printf("查无此数");
while(s!=1)
	if(n=a[mid])
		printf("位置是第%d位",&mid);
		s=1;
	if(n>a[mid])
		max=mid-1;
	if(n<a[mid])
		min=mid+1;
return 0;

}
