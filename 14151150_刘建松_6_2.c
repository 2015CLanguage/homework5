#include"stdio.h"
int main()
{
	int a[10],i,j,min,k,temp;
	printf("请任意输入10个整数:\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("这10个数由小到大的排列顺序为：");
	for(j=0;j<10;j++){
		min=a[j];
		for(k=j+1;k<10;k++){
			if(a[j]>a[k]){
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
				}
		}
		printf("%5d",a[j]);
	}
	return 0;
}
