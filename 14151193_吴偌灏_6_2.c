#include<stdio.h>
void main()
{ int i,j,m,a[10];
  for(i=0;i<10;i++)
  {scanf("%d",&a[i]);}
  for(i=0;i<10;i++)
  {
	for(j=i+1;j<10;j++)
	{if (a[i]>a[j]) {m=a[i];a[i]=a[j];a[j]=m;}}
    printf("%-5d",a[i]);
	printf("\n");
  }
}
