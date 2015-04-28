#include<stdio.h>
int main()
{
	int i,j,m,l,a[11];
	printf("请输入十个数字\n");
	for(i=1;i<11;i++)
		{printf("a[%d]=",i);
		 scanf("%d",&a[i]);}
	printf("\n");
	printf("原来输入的数字为：\n");
	for(i=1;i<11;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=1;i<10;i++)
		{m=i;
		 for(j=i+1;j<11;j++)
			if(a[m]>a[j])
				m=j;
			l=a[i];
			a[i]=a[m];
			a[m]=l;
		}
	printf("\n排序结果为：\n");
	for(i=1;i<11;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
