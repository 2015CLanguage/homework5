#include <stdio.h>
#define N 15
int main()
{int i,num,p,n,m,q,a[N],flag=1,sign;
  char c;
  printf("input 15 number:\n");
  scanf("%d",&a[0]);
  i=1;
  while(i<N)
  {scanf("%d",&a[i]);
  if (a[i]>=a[i-1])
	  i++;
  else
	  printf("again:\n");
  }
  printf("\n");
  for (i=0;i<N;i++)
	  printf("%5d",a[i]);
  printf("\n");
  while(flag)
  {printf("input number to look for:");
   scanf("%d",&num);
   sign=0;
   p=0;
   n=N-1;
   if((num<a[0])||(num>a[N-1]))
	   q=-1;
   while ((!sign)&&(p<=n))
   {m=(n+p)/2;
   if (num==a[m])
   {q=m;
   printf("has found  %d,position  %d\n",num,q+1);
   sign=1;
   }
   else if (num<a[m])
	   n=m-1;
   else
	   p=m+1;
   }
   if(!sign||q==-1)
	   printf("not found  %d.\n",num);
   printf("continue or end (Y/N)?");
   scanf("%c",&c);
   if (c=='N'||c=='n')
	   flag=0;
  }
  return 0;
}
