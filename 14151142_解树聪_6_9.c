#include<stdio.h>
#define N 15
int main()
{
	int i,num,top,bott,mid,loca,a[N],flag=1,sign;
	char c;
	printf("请按由大到小的顺序输入15个数\n");
	scanf("%d",&a[0]);                        //输入第一个数
	i=1;                      
	while(i<N)                                //检查是否输入完毕
	{
		scanf("%d",&a[i]);
		if(a[i]<=a[i-1])
			i++;
		else
			printf("请重新输入该数：\n");

	}
	printf("\n");
	for(i=0;i<N;i++)                           //输出全部15个数
		printf("%4d",a[i]);
	printf("\n");
	while(flag)                
	{
		printf("请输入要查找的数num:");        //提示用户输入要查找的数
		scanf("%d",&num);
		sign=0;                                //sign=0表示尚未找到
		top=0;                                 //top表示区间起始位置
		bott=N-1;                              //bott表示区间结束位置
		if((num<a[0])||(num>a[N-1]))           //若要查找的数不在区间内
			loca=-1;                           //表示未找到
		while((!sign)&&(top<=bott))
		{
			mid=(top+bott)/2;                  //中间位置元素的下标
			if(num==a[mid])                    //若要查找的数恰巧等于中间元素
			{
				loca=mid;                      
				printf("找到了%d,它的位置是%d\n",num,loca+1);//输出下标
				sign=1;                        //表示找到了
			}
			else
			{
				if(num>a[mid])                 //若查找的数大于中间元素
					bott=mid-1;                //只需从下标为0~mid-1的范围查找
				else                           //若查找的数小于中间元素  
					top=mid+1;                 //只需从下标为mid+1~bott的范围查找
			}
		}
		if(!sign||loca==-1)                    //sign为0或loca等于-1，,意味着找不到
			printf("找不到%d\n",num);
		printf("是否继续查找(Y/N)?");          //问是否继续查找
		scanf("\n%c",&c);
		if(c=='N'||c=='n')                     //不继续，输入N或n
			flag=0;
	}
	return 0;
}
