#include"stdio.h"
int main()
{
	int a[5],b[5],i;
	printf("please input numbers\n");
	for(i=0;i<5;i++)
	{printf("n%d=",i+1);
	scanf("%d",&a[i]);}
	
	for(i=0;i<5;i++)
	{
		b[i]=a[4-i];
		printf("%d ",b[i]);
	}
} 
