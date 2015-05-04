# include <stdio.h>
int main()
{
	int i,mid,fir,end,num,sign1,sign2,x;
	int a[15];
	for(i=0;i<15;i++)
	{
		printf("从大到小输入第%d个数:",i+1);
	    scanf("%d",&a[i]);
	}
	fir=0;
	end=15;
	sign1=0;
    sign2=1;
    printf("输入要查找的数:");
	scanf("%d",&num);
	while(sign2>0&&sign1==0)
	{
		if(num>a[fir]||num<a[end])
		{   
			printf("无此数\n");
			sign2=0;
		}
		else 
		{
			mid=(fir+end)/2;
			if(num==a[mid])
			{
				x=mid;
				printf("已找到，是数列中的第%d个数\n",x+1);
				sign1=1;
			}
			else if(num<a[mid])
				fir=mid+1;
			else
				end=mid-1;
		}
	}
    return 0;
}	
	
