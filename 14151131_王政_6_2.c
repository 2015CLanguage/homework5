#include <stdio.h>
int main()
{
	int i,j,t,min,a[10];
	printf("请依次输入10个整数:\n");
	for(i=0;i<10;i++)
	{
		printf("第%d个整数为:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
    printf("这十个整数从小到大排序后为:");
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
	return 0;
}
