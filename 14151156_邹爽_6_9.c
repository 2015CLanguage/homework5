#include<stdio.h> 
 #include<math.h> 
 int main() 
 { 
 	int m[15],n,i,mid,left,right,a; 
 	printf("请输入15个由小到大的数字\n"); 
 	for(i=0;i<15;i++) 
 		scanf("%d",&m[i]); 
 	printf("请再输入一个数字n:"); 
 	scanf("%d",&n); 
 	mid=7; 
 	left=0; 
 	right=14; 
 	while((mid-left)>1)
	 { 
 
 
 			if(n>m[mid]){ 
 				left=mid; 
 				mid=(left+right)/2; 
 				 
 			} 
 
 
 
 
 			else if(n<m[mid]){ 
 				right=mid; 
 				mid=(left+right)/2; 
 			} 
 			else 
 				break; 
 			 
 	} 
 	a=mid+1; 
 	if(m[mid]==n) 
 		printf("第%d个数是你要查询的数",a); 
 	else 
 		printf("无此数"); 
 
 
 return 0; 
 } 
