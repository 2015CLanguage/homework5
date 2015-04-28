#include<stdio.h>
void main()
{
	printf("请输入15个数:");
	int a[15],n,i,b=0,t=14,mid=(b+t)/2,j,x;
	for(i=0;i<15;i++)
	{printf("a[%d]=",i+1);
	scanf("%d",&a[i]);}
    for(j=0;j<14;j++)
	{
		for(i=0;i<14-j;i++)
			if(a[i]<a[i+1])
			{x=a[i];a[i]=a[i+1];a[i+1]=x;}//用冒泡法对其从大到小排序
	}
	printf("排列后为:");
	for(i=0;i<15;i++)
	{printf("a[%d]=%d\n",i+1,a[i]);}
	printf("\n");//输出排序后的数组
	printf("请输入一个数:");
    scanf("%d",&n);
    if(n>a[0]||n<a[14])
	printf("无此数\n");//判断是否在15个数中
	else if(n<a[0]&&n>a[14])
	{
		while(b<t)
		 {
			if(n==a[mid])break;
            else if(n>a[mid])
	           t=mid-1;
            else if(n<a[mid])
			{b=mid+1;}
            mid=(b+t)/2;  //利用折半查找法找出位置
		 }
         printf("该数位置是:%d\n",mid+1);
	}

}Enter file contents here
