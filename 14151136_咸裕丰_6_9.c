#include"stdio.h"
#define N 15
int main()
{
	int i,num,top,bott,mid,loca,a[N],sign;
	printf("请按照由大到小的顺序输入15个数:\n");
	scanf("%d",&a[0]);
	i=1;                      
	while(i<N)                               
	{
		scanf("%d",&a[i]);
		if(a[i]<=a[i-1])
			i++;
		else
			printf("请重新输入该数：\n");
	}
	printf("请输入要查找的数:");                    
	scanf("%d",&num);
	sign=0;                               
	top=0;                                 
	bott=N-1;                              
	if((num<a[0])||(num>a[N-1]))           
		loca=-1;                           
	while((!sign)&&(top<=bott))
	{
		mid=(top+bott)/2;                  
		if(num==a[mid])                   
		{
			loca=mid;                      
	    printf("要查找数的位置是:%d\n",loca+1);
		sign=1;                        
		}
		else
		{
			if(num>a[mid])                 
				bott=mid-1;                
			else                           
				top=mid+1;                
		}
	}
	if(!sign||loca==-1)                   
		printf("找不到要查找的数%d\n",num);
	return 0;
}
