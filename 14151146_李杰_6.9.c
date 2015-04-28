#include<stdio.h>
#define N 15
int main()
{
	int i,num[N],aim,min,max,mid,judgement,flag=1,posi;//aim是待查数据，min和max是查找范围，judgement的值代表aim是否存在
	char j,c;
	printf("Input numbers:\n");//输入数据
	scanf("%d",&num[0]);
	for(i=1;i<N;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>num[i-1])
		{
			printf("Error! Please input this number again.\n");
			i=i-1;
		}
	}
	printf("The numbers are :");//展示原始数据
	for(i=0;i<N;i++)
		printf("%5d ",num[i]);
	while(1)//寻找目标数据
	{
		printf("\nPlease input the aimed number: ");
		scanf("%d",&aim);
		scanf("%c",&c); //中和一个回车换行
		min=0;max=N-1;judgement=0;//使得每次进行寻找前固定初值
		if((aim<=num[0])&&(aim>=num[N-1]))//输入数据只有在范围内才进行寻找
		{
			while((!judgement)&&(min<=max))
			{
			mid=(min+max)/2;
			if(aim==num[mid])
			{judgement=1;posi=mid;}
			else if(aim>num[mid])
				max=mid-1;
			else
				min=mid+1;
			}
		}
		if(judgement&&(min<=max))
			printf("%d its position is %d.\n",aim,posi);
		else
			printf("无此数\n");
		printf("Continue or not(Y/N)?  ");//确定是否进行下次查找
		scanf("%c",&j);
		if(j=='N'||j=='n') break;
	}
	return 0;
}
