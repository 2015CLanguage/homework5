#include <stdio.h>
#define N 15
int main()
{int i,n,t,b,m,l,a[N],flag=1,s;
  char c;
  printf("输入数据:\n");
  scanf("%d",&a[0]);
  i=1;
  while(i<N)
	{scanf("%d",&a[i]);
		if (a[i]>=a[i-1])
		i++;
		else
		printf("再一次输入数据（要求不得比前一个数小）:\n");
	}
  printf("\n");
  for (i=0;i<N;i++)
	  printf("%5d",a[i]);
  printf("\n");

  while(flag)
	{printf("输入要查找的数字:");
	scanf("%d",&n);
	s=0;
	t=0;
	b=N-1;
	if((n<a[0])||(n>a[N-1]))
	   l=-1;
	while ((!s)&&(t<=b))
	{m=(b+t)/2;
	if (n==a[m])
	{l=m;
	printf("找到%d,它的位置在第%d\n",n,l+1);
	s=1;
	}
	else if (n<a[m])
		   b=m-1;
	else
	   t=m+1;
	}
	if(!s||l==-1)
	   printf("未能找到%d.\n",n);
	printf("继续查找（按N退出查找）");
	scanf("%c",&c);
	if (c=='N'||c=='n')
	   flag=0;
	}
	return 0;
}
