#include<stdio.h>
int main()
{int i,a[11],j,min,t;
printf("请输入十个整数\n");
for(i=1;i<=10;i++){
	printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
printf("%5d",a[i]);
for(i=1;i<=10;i++){
	min=i;
	for(j=i+1;j<=10;j++){
		if(a[min]>a[j])min=j;
	t=a[i];
	a[i]=a[min];
	a[min]=t;
		
	}
}
printf("\n数字从小到大排列为:\n");
for(i=1;i<=10;i++)
printf("%5d",a[i]);
printf("\n");
return 0;
}
