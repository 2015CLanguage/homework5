#include<stdio.h>
void main()
{
      int i,j,k,t,a[10];
      printf("请输入十个整数:\n");
	  for(i=0;i<10;i++)
		  scanf("%d",&a[i]);
	  printf("\n");
	  for (i=0;i<10;i++)
	  {
		  k=i;
		  for(j=i+1;j<10;j++)
		  {  
			  if(a[k]<a[j])
			  {k=j;}
		  }
	      t=a[i],a[i]=a[k],a[k]=t;
	  }
	  printf("十个整数从大到小排序为:\n");
	  for(i=0;i<10;i++)
		  printf("%d ",a[i]);
	  printf("\n");

}
