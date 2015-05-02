# include<stdio.h>
void main()
{ 
	int a[5],i,t;
	printf("请输入五个整数：\n");

	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	printf("正序为：");
	for(i=0;i<=4;i++)
		printf("%5d",a[i]);
	printf("\n");
	for(i=0;i<=2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	printf("逆序为：");
	for(i=0;i<=4;i++)
		printf("%5d",a[i]);

	printf("\n");

}
