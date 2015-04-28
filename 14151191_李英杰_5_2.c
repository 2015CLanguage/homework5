#include<stdio.h>
int main()
{
    int min,i,j,t,a[10];
	printf("请输入10个整数:\n");
		for(i=0;i<10;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
		printf("原始顺序为：\n");
		for(i=0;i<10;i++)
		{
			printf("%5d",a[i]);
		}
		printf("\n");
		for(i=0;i<10;i++)
		{
			min=i;
			for(j=i+1;j<10;j++)
			{
				if(a[min]>a[j])
				{
					min=j;
				}
            }
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
        printf("排序后由小到大顺序为：\n");
		for(i=0;i<10;i++)
			printf("%5d",a[i]);
        printf("\n");
		return 0;
}
