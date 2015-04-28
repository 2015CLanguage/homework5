#include<stdio.h>
int main()
{
	int a[10],i,j,t;
	printf("输入十个数:\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for(j=0;j<9;j++){
	for(i=0;i<9-j;i++){
	if(a[i]>a[i+1]){
		t=a[i];a[i]=a[i+1];a[i+1]=t;
	}
}
}
	printf("排序后的数为:\n");
	for(i=0;i<10;i++){
	printf("%d",a[i]);
	printf("\n");}
return 0;}
