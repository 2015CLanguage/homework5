#include<stdio.h>
#define N 5
int main()
{int i,t,a[N];
printf("输入一个数组\n");
for(i=0;i<N;i++){
	scanf("%d",&a[i]);
}
printf("array a:\n");
for(i=0;i<N;i++){
printf("%5d",a[i]);
}
for(i=0;i<N/2;i++){
	t=a[i];
	a[i]=a[N-i-1];
	a[N-i-1]=t;
}
printf("\n new array a:\n");
for(i=0;i<N;i++){
printf("%5d",a[i]);
}
printf("\n");
return 0;	
}
