#include<stdio.h>
int main()
{
	int i,j;
	int a[6],b[6];
	printf("请依次按顺序输入六个元素：\n");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(j=6-1;j>=0;j--){
		b[j]=a[6-j-1];}
	printf("输入数组的逆序数组是：\n");
	for(i=0;i<6;i++){
		printf("%d\n",b[i]);}
	return 0;
}
