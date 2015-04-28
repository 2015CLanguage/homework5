#include<stdio.h>
void main()
{
	int a[10],t,s,i,j;
	printf("请输入十个整数:\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]); //输入十个整数
	}
    for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=1;i<10;i++)
	{
		s=i;          
		for(j=i+1;j<10;j++)     //对十个整数按照选择法排序
		if(a[s]>a[j])
			s=j;
			t=a[i];
		    a[i]=a[s];
			a[s]=t;
	}
	printf("这十个数按选择法排序后为:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}
