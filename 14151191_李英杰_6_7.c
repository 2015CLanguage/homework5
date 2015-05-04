#include<stdio.h>
int main()
{  
	int n,i,j,m,a[19][19],f=1;
	while(f)
	{
		printf("请输入方阵阶数: ");
	    scanf("%d",&n);
		if((n>0)&&(n<=19)&&(n%2!=0))
			f=0;	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=0;
	}
	a[0][n/2]=1;
	i=0;
	j=n/2;
	for(m=2;m<=n*n;m++)
	{
		if((i==0)&&(j==n-1))
		{
			a[i+1][j]=m;
			i++;
		}
		else if((i==0)&&(a[n-1][j+1]==0))
		{
			a[n-1][j+1]=m;
			i=n-1;
			j++;
		}
		else if((j==n-1)&&(a[i-1][0]==0))
		{
			a[i-1][0]=m;
			j=0;
			i--;
		}
		else if((a[i-1][j+1])==0)
		{
			a[i-1][j+1]=m;
			i--;
			j++;
		}
		else
		{
			a[i+1][j]=m;
			i++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%-6d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
