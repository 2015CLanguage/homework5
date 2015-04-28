Enter file contents here
#include<stdio.h>
 #define N 15
 int main()
 {
 	int a[N],i,j,k;
 	printf("输入十五个数\n");
 	for (i=0;i<N;i++)
		scanf("%d",&a[i]);
 	for (j=1;j<N;j++)
 	{
 	    for(i=0;i<15-j;i++)
 		{if (a[i]<a[i+1])
 		k=a[i+1];
 		a[i+1]=a[i];
 		a[i]=k;
 		}
 	}
 	int sign,number,loca,top,bott,mid;
 	printf("请输入一个数:\n");
 	scanf("%d",&number);
 	sign=0;
 	top=0;
	bott=N-1;
 	while ((!sign)&&(top<=bott))
	{
     mid=(bott+top)/2;
 	 if (a[mid]==number)
 	  {
      loca=mid;
 	  printf("找到%d,它的位置是%d\n",number,loca+1);
 	  sign=1;
 	  }
     else if (a[mid]>number)
         bott=mid-1;
     else
         top=mid+1;
   }
   if(sign==0)
      {
       printf("未找到%d\n",number);
      }
   return 0;
}
