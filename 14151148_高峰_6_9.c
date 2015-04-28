#include<stdio.h>
int main()
{
	int i,a[15],x,n=0,m=14;
	printf("请按从大到小的顺序依次输入15个数\n");
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
	printf("请输入要查找的数x=");
	scanf("%d",&x);
	while(a[(n+m)/2]!=x&&n<=m)
	{
		printf("%d",a[(n+m)/2]);
		if(a[(n+m)/2]<x)
			m=((n+m)/2)-1;
		else
			n=((n+m)/2)+1;
	}
	if(a[(n+m)/2]==x)
		printf("%d在数组的第%d位\n",x,(n+m)/2);
	else
		printf("无此数\n");
	return 0;
}
