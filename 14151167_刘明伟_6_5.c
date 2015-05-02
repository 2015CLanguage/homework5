Enter file contents here
# include<stdio.h>
int main()
{int a[5];
int i,j,b[5];
printf("enter array a:\n");
for(i=0;i<5;i++)
{printf("a[%d]=",i);
scanf("%d",&a[i]);}
for(i=0;i<5;i++)
{	j=4-i;
b[j]=a[i];}
printf("逆序数为；");
for(j=0;j<5;j++)
printf("%5d",b[j]);
printf("\n");
return 0;
}
