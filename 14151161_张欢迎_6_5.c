 #include<stdio.h> 
 void main() 
 { 
       int i,j,k,t,a[5]; 
       printf("请输入五个整数:\n"); 
	  for(i=0;i<5;i++) 
 		  scanf("%d",&a[i]); 
 	  printf("\n"); 
 	  for(i=0;i<2;i++) 
		  t=a[i],a[i]=a[4-i],a[4-i]=t; 
          printf("逆序为:\n"); 
	  for(i=0;i<5;i++) 
		  printf("%d ",a[i]); 
	  printf("\n"); 

 
} 
