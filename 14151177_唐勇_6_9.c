#include<stdio.h>
int main()
{
int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
int l=0,h=14,x,m;
printf("Enter a number:\n");
scanf("%d",&x);
while(l<=h)
{
m=(l+h)/2;
if(x=a[m])
{
    break;
} 
else if(x>a[m])
{
l=m+1;
}
else if(x<a[m])
{
    h=m-1;
}
}
printf("是第%d个元素",m+1);
return 0;
}
