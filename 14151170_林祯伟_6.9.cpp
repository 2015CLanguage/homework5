#include <stdio.h>         //xt6-9
#include <stdlib.h>            //交晚了，抱歉。
#define N 15

int main()
{
	int a[N],i,k,top=0,mid,bot=N-1,sign=0;
	printf("从大到小输入%d个整数，以空格隔开：\n",N);
	for(i=0;i<N;i++) {scanf("%d",&a[i]);}
	
	for(i=0;i<N;i++) {printf("%5d\n",a[i]);}
	printf("输入完毕。要查找的数是:");
	scanf("%d",&k);
	
	mid = (top + bot) / 2;
	if(k>a[0]||k<a[N-1]){printf("找不到此数.\n");system("PAUSE");}
	
	while (top <= bot)                             //实现二分法查找数据的循环
	{
		if (k == a[mid])                           //当输入的数据等于中间数时输出该数，同时结束循环
		{
			printf("完成。%d是第%d个数字\n", k, mid + 1);
			sign=1;                                 //用sign标记printf语句，以判断其有没有被执行
			break;
		}
		else if (k>a[mid])                           //缩小查找范围
		{
			bot = mid - 1;
			mid = (top + bot) / 2;
		}
		else if (k < a[mid])  
		{
			top = mid + 1;
			mid = (top + bot) / 2;
		}
	}
	if (sign==0)                         //若需要寻找的数据不在数组中，则输出“找不到此数”
		printf("找不到此数。\n");
	
	return 0;
 } 

