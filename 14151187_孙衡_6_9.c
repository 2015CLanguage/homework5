# include<stdio.h> 
int main() 
{  
 	int a[15],i,j,t,bot,top,mid,flag=1,N,sign; 
 	char c,y,n; 
 	N=15; 
 	printf("请输入a[0]:"); 
 	scanf("%d",&a[0]); 
 	printf("请再输入14个整数："); 
 	for(i=1;i<=14;) 
 	{scanf("%d",&a[i]); 
 		if (a[i]>=a[i-1]) 
 			printf("请重新输入:"); 
 		else i++;} 
 	while(flag) 
 	{ 
 		printf("请输入要查找的数字：",t); 
 		scanf("%d",&t); 
 		sign=0; 
 		bot=0; 
 		top=14; 
 		if((t>a[0])||(t<a[N-1])) 
 			j=-1; 
 		while((!sign)&&(bot<=top)) 
 		{	mid=(bot+top)/2; 
 			if (t==a[mid]) 
 			{	j=mid; 
 				printf("查找的数为第%d个\n",j+1); 
 				sign=1; 
 				flag=0;} 
		else if (t>a[mid]) 
 			top=mid-1; 
 		else 
 			bot=mid+1;} 
 		if(!sign||j==-1) 
		{printf("未找到，重新输入请输入y,不重新输入请输入n"); 
 		 scanf("\n%c",&c); 
 		 if(c=='n') 
			 flag=0;} 
		  
 	} 
 	return 0; 
 } 
