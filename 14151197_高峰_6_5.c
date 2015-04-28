#include <stdio.h>
int main(){
	int a[10],i,j,k,b;
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
		if(a[i]==-1){
			break;
		}
	}
	for(j=0;j<i-j-1;j++){
		b=a[j];
		a[j]=a[i-j-1];
		a[i-j]=b;
	}
	for(k=0;k<i;k++){
		printf("%d\t",a[k]);
	}
	return 0;
}
