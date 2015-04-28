#include<stdio.h>
int main()
{    
	int a[5], i, temp;              
	printf("please input array a:\n");    
	for (i = 0; i < 5; i++)                
		scanf("%d", &a[i]);    
	printf("array a:\n");   
	for (i = 0; i < 5; i++)                
		printf("%d ", a[i]);    
	printf("\n");    
	for (i = 0; i < 2; i++)            
	{        
		temp = a[i];                  
		a[i] = a[4-i];        
		a[4-i] = temp;    
	}   
	printf("Now array a:\n");    
	for (i = 0; i < 5; i++)               
		printf("%d ", a[i]);
    return 0;
}
