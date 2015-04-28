#include<stdio.h>

int binary(int a[],int l,int n,int p,int q);

void main()
{
	int i,n,a[15];
	printf("Please input 15 numbers.\n");
	for(i=0;i<=14;i++)
		scanf("%d",&a[i]);
	printf("Please input the target number.\n");
	scanf("%d",&n);
	n=binary(a,15,n,0,14);
	if(n==-1)
		printf("No Found.\n");
	else
		printf("The target is No.%d number in the array.\n",n+1);
}

int binary(int a[],int l,int n,int p,int q)
{
	if(a[(p+q)/2]==n)
		return (p+q)/2;
	if((q-p)<=1)
		return -1;
	if(a[(p+q)/2]<n)
		return binary(a,15,n,(p+q)/2,q);
	if(a[(p+q)/2]>n)
		return binary(a,15,n,p,(p+q)/2);
}
