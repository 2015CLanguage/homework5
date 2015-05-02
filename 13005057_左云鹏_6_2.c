#include<stdio.h>
int main()
{
	int i,j,s,t,a[11];
	
	printf("请输入十个整数：\n");//接受输入
	for(i=1;i<=10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("未排序时的的数组时：\n");//打印显示
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);
	printf("\n");
	
	for(i=1;i<=9;i++)//排序
	{
		s=i;
		for(j=i+1;j<=10;j++)
			if(a[j]<a[i])s=j;//交换位置
			t=a[i];
			a[i]=a[s];
			a[s]=t;
	}
	
	
	printf("\n排序后的数组为：\n");//打印结果
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);
	printf("\n");
	
	return 0;
}
