# include<stdio.h>
int main()
{ 
	int a[10],i,j,t,min;
	printf("请输入10个整数：\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0;i<=8;i++)
	{min=i;
		for(j=i+1;j<=9;j++)
		{
			if(a[min]>a[j])
				min=j;
				t=a[i];
				a[i]=a[min];
				a[min]=t;
		}
	}
	printf("数字由小到大的顺序为:");
	for(i=0;i<=9;i++)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}

