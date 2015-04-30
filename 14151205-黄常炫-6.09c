#include<stdio.h>
int main()
{
int i,x,f,l,mid,sign,ord,a[15];
printf("由小到大输入15个数：");
for(i=0;i<15;i++)
{
scanf("%5d",&a[i]);
}
for(i=0;i<15;i++)
{
printf("%5d",a[i]);
}
printf("\n输入要查找的数：");
scanf("%d",&x);
sign=0;
f=0;
l=14;
while(sign==0&&f<=l)
{
mid=(f+l)/2;
if(x==a[mid])
{
sign=1;
ord=mid+1;}
else if(x>a[mid])
f=mid+1;
else
l=mid-1;
}
if(sign==0||ord==-1)
printf("找不到该数\n");
else
printf("该数位置是%d",ord);
return 0;
}
