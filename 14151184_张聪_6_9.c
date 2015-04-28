#include<stdio.h>
#define N 15
int main()
{int a[N],date,i,first,last,result,loca,mid;
printf("enter date:\n");
scanf("%d",&a[0]);
i=1;
while(i<N){
	scanf("%d",&a[i]);
	if(a[i]>a[i-1])
		i=i+1;
	else
		printf("enter this date again\n");
}
printf("\n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
printf("\n enter the date you want to find\n");
scanf("%d",&date);
first=0;
last=N-1;
result=0;
if(date<a[0]||date>a[N-1])
loca=-1;
while((result==0)&&(first<=last))
{
mid=(first+last)/2;
if(date==a[mid]){
loca=mid;
printf("has found %d,its location is %d",date,loca+1);
result=1;
}
else{
    if(date,a[mid])
        last=mid-1;
    else
        first=mid+1;
}

}
if(result==0||loca==-1)
    printf("cannot find %d\n",date);
return 0;
}
