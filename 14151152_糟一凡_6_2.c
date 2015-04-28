#include"stdio.h"
int main()
{
	int i,j,k,m,n,t,a[10];
	printf("请输入10个整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<9;j++)
	{
		m=a[j];
		for(k=j+1;k<10;k++)
		{
			if(m<a[k])
			{
				m=a[k];
				n=k;
			}
		}
		a[n]=a[j];
		a[j]=m;
	}
	printf("排序后的数组为：");
	for(t=0;t<10;t++)
	{
		printf("%d ",a[t]);
	}
	printf("\n");
	return 0;
}
