#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k,t;
	printf("请输入10个数字：\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<9;i++)//进行9次循环
	{
		k=i;
		for(j=i+1;j<10;j++)//每趟进行9-i次比较
		{	if(a[k]>a[j])//选出比较中最小的数字
		    k=j;
	    	if(k!=i)//赋给起始值
			{t=a[i];a[i]=a[k];a[k]=t;}
		}
		
	}
	printf("这十个数从从小到大的顺序：\n");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}
