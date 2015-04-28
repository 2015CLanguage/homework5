#include<stdio.h>
#define m 5
int main()
{
	int a[m],i,t;
	printf("请按提示输入数据\n");
	for(i=0;i<m;i=i+1)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("原顺序是:\n");
	for(i=0;i<m;i=i+1)
		printf("%4d",a[i]);
	for(i=0;i<=m/2;i++)
	{
		t=a[i];
		a[i]=a[m-i-1];
		a[m-i-1]=t;
	}
	printf("\n逆顺序是:\n");	
	for(i=0;i<m;i=i+1)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
