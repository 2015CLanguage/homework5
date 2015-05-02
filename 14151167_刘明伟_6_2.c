Enter file contents here
# include<stdio.h>
int main()
{
	int a[10];
	int i,j,m,c;
	printf("输入十个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<10;i++)
	{	c=i;
	for(j=i+1;j<=9;j++)
		if(a[c]>a[j]) c=j;
		m=a[i];
		a[i]=a[c];
		a[c]=m;
	}
	printf("\nThe sorted numbers:\n");
	for(i=0;i<10;i++)
		printf("%6d",a[i]);
	printf("\n");
	return 0;
}
