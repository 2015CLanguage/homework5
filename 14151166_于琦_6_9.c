#include<stdio.h>
int main()
{
    int a[15],i,x,t,min=0,max=14;
	for(i=0;i<15;i++)
	{
	    printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("请输入一个数");
	scanf("%d",&x);
	if (x<a[0]||x>a[14])
		printf("can't find %d\n",x);
	else {
		for(i=1;;i++){
		    t=(max+min)/2;
			if (x==a[t]){
			    printf("%d\n",t+1);
                break;
			}				
			else {
			    if (x<a[t])
				    max=t-1;
				else
					min=t+1;
			}
			if (max<=min){
			    printf("can't find %d\n",x);
                break;
			}
				
			}
		}
	return 0;
}
