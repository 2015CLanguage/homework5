#include<stdio.h>
int main()
{
	int a[5] = {8,6,5,4,1};
	int i,j,t;
	printf("数组原来的顺序为\n");
	for (i=0;i<5;i++)
		printf("%2d",a[i]);
	printf("\n\n");
	printf("按逆顺序存放后顺序为：\n");
	for (j=0;j<i/2;j++)
	{
		t= a[j];
		a[j]=a[4-j];
		a[4-j]=t;
	}
	for (i=0;i<5;i++)
		printf("%2d",a[i]);
	printf("\n");
}
