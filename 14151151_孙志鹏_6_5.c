#include <stdio.h>
#define N 5
int main()
{int i,t,a[N];
	printf("请输入数据:\n");
	for (i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("输入的数据是:\n");
	for (i=0;i<N;i++)
		printf("%4d",a[i]);
	for (i=0;i<N/2;i++)
	{	t=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=t;
	}
    printf("\n逆序排序后是:\n");
    for(i=0;i<N;i++)
	   printf("%4d",a[i]);
    printf("\n");
	   return 0;
}
