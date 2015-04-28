#include<stdio.h>
int main()
{
  int a[10],i,j,temp,m;
  printf("Please input 10 numbers:");
  for(i=0;i<10;i++)
  {
	  scanf("%d",&a[i]);
  }
  printf("The sorted numbers:");
  for(i=0;i<10;i++)
  {   m=i;
	  for(j=i+1;j<=10;j++)
	  {if(a[m]>a[j]) m=j;}
	  temp=a[i];
	  a[i]=a[m];
	  a[m]=temp;
  } 
  for(i=0;i<10;i++)
  {
	  printf("%5d",a[i]);
  }
  printf("\n");
  return 0;
}
