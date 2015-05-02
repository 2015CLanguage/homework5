#include<stdio.h>
void main()
{
	int a[15],i,j=7,k=4,n;
	printf("请按由大到小的顺序输入十五个整数\n");
	for(i=0;i<15;i++)         
		scanf("%d",&a[i]);
	printf("输入的数组为\n");
	for(i=0;i<15;i++)         
		printf("%3d",a[i]);
	printf("\n");
	printf("请输入所要查询数字\n");
	scanf("%d",&n);
	while(k>0)   
	{
		if(n<a[j])
			j=j+k;
		else
			j=j-k;
		k=k-2;
	}
	if(n==a[j])   //遍历这三个数字，确定其位置
		printf("该元素为第%d个元素\n",j+1);
	else if(n==a[j+1])
		printf("该元素为第%d个元素\n",j+2);
	else if(n==a[j-1])
		printf("该元素为第%d个元素\n",j);
	else
		printf("不存在该数字\n");
}
