#include<stdio.h> 
 int main() 
 { 
 	int input, i, mid=0, n=0, max=14, min=0, a[15]; 
 	printf("请按照从大到小的顺序输入数组：\n"); 
 	for (i=0; i<15; i++) 
 	{ 
 		scanf("%d", &a[i]); 
 		if(i>0 && a[i]>=a[i-1]) 
 		{ 
 			printf("输入错误，请重新输入：\n"); 
 			i=i-1; 
 		} 
 	} 
 	printf("你所输入的数组为：\n"); 
 	for (i=0; i<15; i++) 
 	{ 
 		printf("%5d", a[i]); 
 	} 
 	printf("\n请输入要查找的数字："); 
 	scanf("%d", &input); 
 	for (max=14, min=0; max-min>=0; ) 
 	{ 
 		mid=(min+max)/2; 
 		printf("%d, %d, %d, %d.\n", mid, max, min, a[mid]); 
 		if (a[mid]<input) 
 		{ 
 			max=mid-1; 
 		} 
 		else if (a[mid]>input) 
 		{ 
 			min=mid+1; 
 		} 
 		else 
 		{ 
 			printf("该数字在数列第%d位处。\n", mid+1); 
 			n=1; 
 			break; 
 		} 
 	} 
 	if (n==0) 
 		printf("无此数！\n"); 
 	return 0; 
 } 
