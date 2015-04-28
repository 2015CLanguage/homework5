#include<stdio.h>
int main()
{
	int a[5],i,t;
	printf("请输入五个数:\n");
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
    printf("%d",a[i]);
	}
	for(i=0;i<5;i++){
		if(i<2){
			t=a[i];a[i]=a[4-i];a[4-i]=t;
		}
	}
	printf("互换后的数组为:\n");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
return 0;}
