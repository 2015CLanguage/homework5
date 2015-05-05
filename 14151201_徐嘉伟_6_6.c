#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	a[0][0]=1;
	a[1][0]=1;
	a[1][1]=1;
	
	for(i=2;i<=9;i++){
		a[i][0]=1;
		for(j=0;j<=i-1;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		i=j;
		a[i][j]=1;
		}
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				printf("%d\t",a[i][j]);
				if(i==j){
					printf("\n");
					break;
				}
			}
		}
return 0;}
