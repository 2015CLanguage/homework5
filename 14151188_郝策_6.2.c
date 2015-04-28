#include"stdio.h"
int main()
{
	int i,j,string[10],min,temp;
	printf("please input 10 number:\n");
	for(i=0;i<10;i++)
	{
		printf("n%d=",i+1);
		scanf("%d",&string[i]);
	}
	for(i=0;i<10;i++)
	{
		min=string[i];
		for(j=i;j<10;j++)
		{
			if(string[j]<min)
			{
				temp=min;
				min=string[j];
				string[j]=temp;
			}
		}
		string[i]=min;
	}
	printf("从小到大排序为\n");
	for(i=0;i<10;i++)
	printf("%-5d",string[i]);
}
