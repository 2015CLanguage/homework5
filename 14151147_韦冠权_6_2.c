#include<stdio.h>
int main()
{
	int i,j,t,min,a[10];
	printf("输入十个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)  //将a[i+1]-a[9]中最小值与a[i]对换
			if(a[min]>a[j])
				min=j;
			    t=a[i];
				a[i]=a[min];
				a[min]=t;
	}
	printf("将输入的数字从小到大排序为：");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
