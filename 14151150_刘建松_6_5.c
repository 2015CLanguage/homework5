#include"stdio.h"
#define n 5
int main()
{
	int a[n],i,j,temp;
	printf("请输入数组中的%d个值：\n",n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
        scanf("%d",&a[i]);
	}
	for(j=0;j<n/2.0;j++){
		temp=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=temp;
	}
	printf("数组中的值的逆序为：");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	printf("\n");
	return 0;
}
