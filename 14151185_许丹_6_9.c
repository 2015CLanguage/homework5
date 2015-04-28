#include<stdio.h>
#define N 15
int main()
{
	int a[N],i,n,s=0,t=0,b=N-1,l,m,f=1;
	printf("Please input numbers:");
	scanf("%d",&a[0]);
	i=1;
	while(i<N)
	{
		scanf("%d",&a[i]);
		if(a[i]>=a[i-1])
			i++;
		else
			printf("enter this number again:\n");

	}
	printf("\n");

	printf("The original array is:");
	for(i=0;i<N;i++)
	{
		printf("%4d",a[i]);
	}

	while(f)
	{
		printf("\nWhich number do you want to check:");
	    scanf("%d",&n);
        if((n<a[0])||(n>a[n-1]))  l=-1;
     	while ((!s)&&(t<=b))
		{
			m=(b+t)/2;
			if(n==a[m])
			{
				l=m;
				printf("has founded %d, the position is %d\n",n,l+1);
				s=1;
			}
			else if(n<a[m])
				b=m-1;
			else 
				t=m+1;
		}
		if(!s||l==-1)
			printf("cannot find %d\n",n);

		printf("continue or not?(Y/N)");
		char c;
		scanf("%c",&c);
		if(c=='N') f=0;
	}
	return 0;
}
