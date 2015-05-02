#include <stdio.h>
#define N 15
int main ()
{int i,number,top,bott,mid,loca,a[N],flag=1,sign;   
char c;
printf("enter data:\n");
scanf("%d",&a[0]);
i=1;
while(i<N)
   {scanf("%d",&a[i]);
     if (a[i]<=a[i-1])
      i++;
	 else
		 printf("重新输入这个数字:\n");}


printf("\n");
for (i=0;i<N;i++)
printf("%10d",a[i]);


printf("\n");



while(flag)
  {printf("input number to looking for\n");
  scanf("%d",&number);
  sign=0;
  top=0;
  bott=N-1;
  if(number>a[0]||number<a[N-1])
    loca=-1;
  while(!sign && (top<bott))
     {mid=(bott+top)/2;
        if (number==a[mid])
		{loca=mid;
		printf("%d,%d",a[mid+1],number);
		sign=1;
		}
  
  else if(number<a[mid])
	  bott=mid-1;
  else  
      top=mid+1;
      
          
  if (!sign||loca==-1)
	  printf("找不到%d\n",number);
  printf("是否继续？");
	  scanf("%c",c);
	  if(c=='N'||c=='n')
		  flag=0;
}


  
  return 0;
  
  
  
  }






return 0;
}
