#include <stdio.h>

int main()
{
	int listn[2][10],listv[10],i,j,k,max;
	printf("输入10个整数，以空格隔开:\n");      //可以连续输入多个数据，不需要一个个按enter
	for(i=0;i<=9;i++)
	{
		scanf("%d",&listn[0][i]);
	}
	//for(i=0;i<=9;i++){printf("%d,",listn[0][i]);}
	
	
	for(i=0;i<10;i++)                           //内层计算最大值，算出来之后降值；接着算第二大的数
	{
		max=listn[0][0];k=0;
		for(j=1;j<10;j++){
			if(max<listn[0][j]){max=listn[0][j];k=j;} 
		}
		listn[1][i]=max;listn[0][k]=-1;
	}
	for(i=0;i<=9;i++){printf("%d,",listn[1][i]);}
	return 0;
 } 
