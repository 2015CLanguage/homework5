#include<stdio.h>
#define N15
int main()
{
	int a[N],i,j,k;
	printf("输入十五个数\n");
	for (i=0;i<N;i++)
		scanf("%d",&a[i]);
	for (j=1;j<N;j++)
	{	for(i=0;i<15-j;i++)
		{if (a[i]<a[i+1])
		k=a[i+1];
		a[i+1]=a[i];
		a[i]=k;
		}
	}
	int m,n;
	while(flag)
	printf("请输入一个数:\n");
	scanf("%d",&m);
	sign=0;
	top=0;
	bott=N-1;
	if((m<a[0])&&(m>a[N-1]))
		n=-1;
	while ((!sign)&&(top<=bott))
	{mid=(bott+top)/2;
	

	if mid==m



		
	elif a[bott/2]>m;




