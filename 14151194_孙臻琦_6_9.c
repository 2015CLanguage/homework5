#include<stdio.h>
int main()
{ 
	int i,j,k=0,mid,min=0,max=14,m,temp,a[15],number;
	printf("请输入15个整数,按回车结束:\n");
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
	for(i=0;i<14;i++)
	{
		m=i;
		for(j=i+1;j<15;j++)
			if(a[m]>a[j])m=j;  
		temp=a[i];
		a[i]=a[m];
		a[m]=temp;
	}
	printf("\n数组为:\n");
	for(i=0;i<15;i++)
		printf("%4d",a[i]);


	printf("\n请输入要查找的数:");
	scanf("%d",&number);
  while(k==0)
	{
		mid=(min+max)/2;
		if(number==a[mid])
		{
			printf("该数的位置为%d",mid+1);
			k=1;
		}
		else if(number>a[mid])
	  {
			max=mid-1;
		}
		else
		  min=mid+1;
	}	 
  return 0;
}
