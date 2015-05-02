Enter file contents here#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t,min;
	printf("输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<10;i++)
	{min=i;
	for(j=i+1;j<10;j++)
			if(a[min]>a[j])
			{t=a[min];
			 a[min]=a[j];
			 a[j]=t;}}
	printf("排序后：\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
