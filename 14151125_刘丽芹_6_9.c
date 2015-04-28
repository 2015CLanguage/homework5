#include<stdio.h>
#include<math.h>
void main()
{
	int a[15];
	int i,num,t=0,c,b,sign=0,loca=0,flag=1;
	//char d;
	printf("请输入从大到小15个数:\n");
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
	printf("数组为:\n");
    for(i=0;i<15;i++)
		printf("%d ",a[i]);
	
	//while(flag=1)
	{
	    printf("请输入要查找的数:\n");
	    scanf("%d",&num);
	   
	    if(num>a[0]||num<a[14])
		     loca=-1;
        c=0;
	    b=14;
	    while((!sign)&&(c<=b))
		{
		   t=(c+b)/2;
	       if(num==a[t])
		   {
			  sign=1;
	          printf("该元素在数组中位置为第%d个元素\n",t+1);
			  
		   }
	      else if(num>a[t])
		     b=t-1;
	      else
		     c=t+1;
		}
	    if(!sign||loca==-1)
		   printf("\n未找到\n");
	    /*printf("是否要继续查找?请输入Y或N\n");
	    scanf("%c",&d);
	    if (d=='N')
		   flag=0;*/
	}
}
