#include<stdio.h>
int main()
{
	int i,j ,min,temp,a[10];
    printf("请输入10个整数,按回车结束:\n");
    for(i=0;i<10;i++)
		scanf("%d",&a[i]);
    printf("原数据为:\n");
    for(i=0;i<10;i++)
		printf("%5d",a[i]);
    printf("\n");
    for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
			if(a[min]>a[j])min=j;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n排序后为:\n");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
