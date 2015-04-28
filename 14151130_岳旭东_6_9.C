#include<stdio.h>
#define N 15
int main()
{
	int i,num,top,bottom,mid,location,a[N],flag=1,sign;
	char c;
	printf("请输入数据：\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("\n此数组是:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	while(flag)
	{
		printf("输入你要找的数字：\n");
		scanf("%d",&num);
		sign=0;
		top=0;
		bottom=N-1;
		if((num<a[0])||(num>a[N-1]))
			location=-1;
		while((!sign)&&(top<=bottom))
		{
			mid=(bottom+top)/2;
			if(num==a[mid])
			{location=mid;
				printf("已经找到%d,它的位置是%d\n",num,location+1);
				sign=1;
			}
			else if(num<a[mid])
				bottom=mid-1;
			else
				top=mid+1;
		}
		if(sign==0||location==-1)
			printf("找不到%d\n",num);
		printf("是否继续查找Y/N");
			scanf("%c",&c);
		if(c=='n'||c=='N')
			flag=0;
		
	}
	return 0;
}
