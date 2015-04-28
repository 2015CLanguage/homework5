#include <stdio.h>
#define N 15
int main()
{int i,num,t,b,m,l,a[N],flag=1,sign;
  char c;
  printf("输入数据为:\n");
  scanf("%d",&a[0]);
  i=1;
  while(i<N)
  {scanf("%d",&a[i]);
  if (a[i]>=a[i-1])
	  i++;
  else
	  printf("再一次输入数据:\n");
  }
  printf("\n");
  for (i=0;i<N;i++)
	  printf("%5d",a[i]);
  printf("\n");
  while(flag)
  {printf("输入要查找的数字:");
   scanf("%d",&num);
   sign=0;
   t=0;
   b=N-1;
   if((num<a[0])||(num>a[N-1]))
	   l=-1;
   while ((!sign)&&(t<=b))
   {m=(b+t)/2;
   if (num==a[m])
   {l=m;
   printf("已经找到%d,它的位置在%d\n",num,l+1);
   sign=1;
   }
   else if (num<a[m])
	   b=m-1;
   else
	   t=m+1;
   }
   if(!sign||l==-1)
	   printf("无此数%d.\n",num);
   printf("继续或停止(Y/N)?");
   scanf("%c",&c);
   if (c=='N'||c=='n')
	   flag=0;
  }
  return 0;
}
