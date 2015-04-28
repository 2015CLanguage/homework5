#include<stdio.h>
void main()
{
	int min,t,i,j,a[11];
	printf("输入十个整数:\n");              //输入十个整数
	for(i=0;i<11;i++)
		scanf("%d",&a[i]);
	printf("\n");
	printf("原排列为:\n");                //输出原排列
    for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<10;i++)                     //选择法排序
	{
		min=i;
		for(j=i+1;j<11;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	printf("按从小到大排列为:\n");          //输出结果
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
}
