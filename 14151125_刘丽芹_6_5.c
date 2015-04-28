#include<stdio.h>
#define N 5
void main()
{
	int a[N];
	int i,t;
	printf("请输入要逆序的数组:\n");
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
		printf("要逆序的数组为:\n");
		for(i=0;i<N;i++)
			printf("%5d",a[i]);
		printf("\n");
		for(i=0;i<N/2;i++)
		{
			t=a[i];
		    a[i]=a[N-1-i];
            a[N-1-i]=t;
		}
	printf("逆序后数组为:\n");
    for(i=0;i<N;i++)
			printf("%5d",a[i]);
	printf("\n");    

}
