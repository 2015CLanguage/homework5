#include <stdio.h>
#include <math.h>
void main()
{
	int a[10];
	int i,j,t,m;
	printf("请输入要排序的整数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		m=i;
		for(j=i+1;j<=9;j++)
			if(a[j]<a[m])
				m=j;
		
		t=a[i];
		a[i]=a[m];
		a[m]=t;
				
	}
	for(i=0;i<10;i++)
		printf("%d\n ",a[i]);
}
