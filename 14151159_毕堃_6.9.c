#include<stdio.h>
int main()
{
	int i,v,a[15],sig,bott,mid,loca,top
        printf("请从小到大依次输入15个数");
	i=0;
	while(i<15){
	scanf("%d",&a[i]);
	if(a[i]>=a[i-1]){
		i++}
	}
	printf("请输入要查找的数：\n");
	scanf("%d",&v);
  sign=0;
  top=0;
  bott=14;
	if(v<a[0]||v>a[14]){printf("未找到此数\n");}
  while((!sign)&&(top<=bott)){
        mid=(bott+top)/2;
	if(v==a[mid]){
        loca=mid;
        printf("此数在第%d个数的位置",loca+1);
        sign=1;}
        else if(v<a[mid]){bott=mid-1;}
        else{mid=mid+1;}
        }
	if(sign==0)
            printf("未找到此数\n");
	return 0;
}
