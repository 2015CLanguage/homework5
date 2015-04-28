# include <stdio.h>
int main()
{
	int i,j,min,k,temp,x;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("输入第%d个数:",i+1);
	    scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++)
	{
	   for(k=j+1;k<10;k++)
	   {
		   if(a[j]>a[k])
		   {
			   temp=a[k];
			   a[k]=a[j];
			   a[j]=temp;
		   }
	   }
               
	}
	for(x=0;x<10;x++)
		printf("%2d",a[x]);
	printf("\n");
	return 0;
}
