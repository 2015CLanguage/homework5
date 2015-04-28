#include<stdio.h>
int main()
{
	int a[10],i,m,t,j;
	printf("请输入要比较的十个整数");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("原排序为：");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	    printf("\n");
	for(i=0;i<9;i++)
	{
		m=i;
		for(j=i+1;j<10;j++)
		{
			if(a[m]>a[j]) 
			m=j;
			t=a[i];
			a[i]=a[m];
			a[m]=t;


		}

	}
	printf("现排序为：");
	for(i=0;i<10;i++)
	    printf("%5d",a[i]);
	    printf("\n");
	
	
return 0;

}
