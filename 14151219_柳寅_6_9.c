#include<stdio.h>
int main()
{int i,j,min,temp,a[15];
  printf("输入数据:\n");
  for(i=1;i<=15;i++)
   {printf("a[%d]=",i);
   scanf("%d",&a[i]);}
  for(i=1;i<=14;i++)
   {min=i;
    for(j=i+1;j<=15;j++) if(a[min]<a[j]) min=j;
    temp=a[i];a[i]=a[min];a[min]=temp;}
  printf("\n排序后的数组:\n");
  for(i=1;i<=15;i++) printf("%5d",a[i]);  
int number,top,mid,bott,loca,flag=1,sign;
while(flag)
{printf("输入要查找的数:");scanf("%d",&number);
sign=0;top=0;bott=14;
if((number<a[0])||(number>a[14])) loca=-1;
while((!sign)&&(top<=bott))
  {mid=(bott+top)/2;
   if(number==a[mid])
     {loca=mid;
      printf("数组中有%d,它在第%d位\n",number,loca+1);
      sign=1;
	 }
   else if(number<a[mid]) bott=mid-1;
   else top=mid+1;
  }
printf("数组中没有%d\n",number);  
printf("continue or not (Y/N)");
char c;scanf("%c",&c);
if(c=='N'||c=='n')flag=0;
}
return 0;}  
