# homework5
#include<stdio.h>
int main()
{int a[15],i,j,t,number,flag=1,sign,top,bott,mid,n=15,loca;
char c;
printf("请输入15个整数:\n");
for(i=0;i<=14;i++)
	scanf("%d",&a[i]);
printf("输入的数组为:\n");
for(i=0;i<=14;i++)
	printf("%5d",&a[i]);
printf("\n");
for(j=0;j<14;j++)
	for(i=0;i<14-j;i++)
		if(a[i]>a[i+1])
		{t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
		printf("数据由小到大的顺序为:\n");
		for(i=0;i<=14;i++)
	printf("%5d",&a[i]);
		printf("\n");
		while(flag)
		{printf("你要查找的数:");
		scanf("%d",&number);
		sign=0;
		top=0;
		bott=n-1;
		if((number<a[0])||(number>a[n-1]))
			loca=-1;
		while((!sign)&&(top<=bott))
		{mid=(top+bott)/2;
		if(number==a[mid])
		{loca=mid;
		printf("已经找到%d,它的位置是%d\n",number,loca+1);
		sign=1;
		}
		else if(number<a[mid])
			bott=mid-1;
		else
			top=mid+1;
		}
		if(!sign||loca==-1)
			printf("无此数%d\n",number);
		printf("是否继续查找(Y/N)?");
		scanf("%c",&c);
		if(c=='N'||c=='n')
			flag=0;
		}
		return 0;
}
