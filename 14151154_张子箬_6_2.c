#include<stdio.h> 
 int main() 
 { 
 	int a[10],i,m,j; 
 	for(i=0;i<10;i++) 
 		scanf("%d",&a[i]); 
 	m=a[0]; 
 	for(j=0;j<10;j++){ 
 		for(i=1;i<10-j;i++){ 
 			if(a[i-1]>a[i]){ 
 				m=a[i-1]; 
 				a[i-1]=a[i]; 
 				a[i]=m; 
 			} 
 		} 
 	} 
 	for(i=0;i<10;i++){ 
 		printf("%3d",a[i]); 
 		printf("/n"); 
 	} 
 	return 0; 
 } 
 
