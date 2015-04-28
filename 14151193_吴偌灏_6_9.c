#include<stdio.h>
void main()
{  int i,m,a[15],max=14,min=0,mid=7;
   printf("从大到小输入十五个数");
   for(i=0;i<15;i++)
   {    
	   scanf("%d",&a[i]);
   }
   printf("输入你需要查找的数");
   scanf("%d",&m);
   while(m!=a[mid])
   {mid=(max+min)/2;
    if(m>a[0]||m<a[14]) {mid=-1;break;}
    if(m>a[mid]) max=mid-1;
	if(m<a[mid]) min=mid+1;
	if(m!=a[mid]&&min==max) {mid=-1;break;}
   }
   if(mid!=-1){printf("此数是第%d个元素\n",mid+1);}  
   else{printf("无此数\n");}
}
