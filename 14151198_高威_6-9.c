#include <stdio.h>

int a[100];
int n;


int main()
{
	int i,x;
	int n=5;
	for (i=0; i<n; i++)  scanf("%d",a+i);
	scanf("%d",&x);
	int l=0,r=n-1;
	bool flag=false;
	while (r-l>1)
	{
		int m=(l+r)/2;
		if (a[m]==x)  {
			printf("The index is %d\n",m+1);
			flag=true;
			break;
		}
		if (a[m]>x)  l=m;
			else r=m;
	}
	if (!flag)
	 for (i=l; i<=r; i++)
	   if (a[i]==x)  {
	   	printf("The index is %d\n",i+1);
	   	flag=true;
	   	break;
	   }
	if (!flag)  printf("无此数\n");
	return 0;
}
