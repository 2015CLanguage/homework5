#include<stdio.h>
int main()
{
	int a[15],i,b,c,h,d=0,e=14,t;
	for(i=0;i<=14;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (b=0;b<14;b++)
		for(i=0;i<14-b;i++)
			if(a[i+1]>a[i])
			{c=a[i+1];
			a[i+1]=a[i];
			a[i]=c;
			}
			printf("排序后:\n");
			for(i=0;i<15;i++)
				printf("%7d",a[i]);
			printf("\n");
			printf("请输入一个数");
			scanf("%d",&h);
			if ((h>a[0])||(h<a[14]))
				printf("无法找到\n");
            else {
        for(i=1;;i++){
		    t=(d+e)/2;
			if (h==a[t]){
			    printf("%d\n",t+1);
                break;
			}
			else {
			    if (h<a[t])
				    d=t+1;
				else
					e=t-1;
			}
			if (e<=d){
			    printf("找不到 %d\n",h);
                break;
			}

			}
		}
	return 0;
}

