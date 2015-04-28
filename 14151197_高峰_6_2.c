#include <stdio.h>
int main(){
	int a[10],i,j,b;
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++){
		for(j=0;j<=9-i;j++){
			if(a[j]>a[j+1]){
			b=a[j];
			a[j+1]=a[j];
			a[j+1]=b;	
			}
		}
	}
	for(i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
