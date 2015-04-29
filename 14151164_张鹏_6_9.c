#include<stdio.h>
int main()
{
	int a[15],i,b,c,n;
	for(i=0;i<=14;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (b=0;b<14;b++)
		for(i=0;i<14-b;i++)
			if(a[i+1]>a[i])
			{c=a[i+1];
			a[i+1]=a[i];
			a[i]=c;
			}
			printf("排序后:\n");
			for(i=0;i<15;i++)
				printf("%7d",a[i]);
			printf("\n");
			printf("输入要查询的数字:");
	                scanf("%d", &n);
	                if (n>a[7])
	                {
		         for (i = 6; i >= 0; i--)
		         if (n == a[i])break;
                        }
	                else
	                {
		         for (i = 7; i < 15; i++)
		         if (n == a[i])break;
	                } 
	                 printf("%d为第%d个数\n", n, i + 1);
	                 return 0;
}

