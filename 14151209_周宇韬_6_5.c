# include <stdio.h>
int main()
{
	int i,j,a[5],k,temp;
	for(i=0;i<5;i++)
	{
		  printf("输入第%d个数:",i+1);
	    scanf("%d",&a[i]);
	}
	for(j=0;j<(i/2);j++)
	{
		temp=a[j];
		a[j]=a[4-j];
		a[4-j]=temp;
	}
	for(k=0;k<5;k++)
	{
		printf("%2d",a[k]);
	}
	printf("\n");
	return 0;
}	
