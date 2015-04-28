#include<stdio.h>
int main()
{
	int i,a[6],b[6];
	printf("请输入数组：\n");
	for(i=1;i<6;i++)
		{printf("a[%d]=",i);
		 scanf("%d",&a[i]);}
	printf("原数组为：\n");
	for(i=1;i<6;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=1;i<6;i++)
		b[6-i]=a[i];
	printf("变换后的数组为：\n");
	for(i=1;i<6;i++)
		printf("%5d",b[i]);
	printf("\n");
	return 0;
}
