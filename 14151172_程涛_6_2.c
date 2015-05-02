#include<stdio.h>
void main()
{
	int a[10];
	int i,b,c;
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (b=0;b<9;b++)
		for(i=0;i<9-b;i++)
			if(a[i+1]<a[i])
			{c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
			}
			printf("排序后:\n");
				for(i=0;i<10;i++)
					printf("%7d",a[i]);
				printf("\n");
}
