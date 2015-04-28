#include"stdio.h"
int main()
{
	int i,m,a=0,b=14;
	float x[15],n;
	printf("请由大到小输入15个数：\n");
	for(i=0;i<15;i++)
	{
        scanf("%f",&x[i]);
		if(i>=1)
		{
			if(x[i]>=x[i-1])
			{
				printf("请重新输入此数\n");
				i=i-1;
			}
		}
	}
	printf("请任意输入一个数：");
	scanf("%f",&n);
	if(n>x[0]||n<x[14])
	{
		printf("无此数\n");
	}
	else
	{
	    while(a!=b)
	    {
		    if(n==x[a])
		    {
			    m=a;
			    break;
		    }
		    else if(n==x[b])
		    {
			    m=b;
			    break;
		    }
	        else if(n>x[(a+b)/2])
	  	    {
		        b=((a+b)/2)-1;
		    }
		    else if(n<x[(a+b)/2])
		    {
			    a=((a+b)/2)+1;
		    }
		    else if(n==x[(a+b)/2])
		    {
			    m=(a+b)/2;
			    break;
		    }
	    }
	    if(x[a]==n)
	    {
	    	m=a;
	    }
	    if(a==b&&x[a]!=n)
	    {
	    	printf("无此数\n");
		}
	    else
	    {
		    printf("该数是第%d个元素的值",m+1);
	    }
    }
    printf("\n");
	return 0;
}
