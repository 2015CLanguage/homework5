#include <stdio.h>
#define N 5
int main(){
	int i[N],a,left,right;
	printf("enter array:\n");
	for (a=1;a<=N;a++){
		scanf("%d",&i[a]);
	}
	for (a=1;a<=N/2;a++){
		left=i[a];
		right=i[N-a+1];
		i[a]=right;
		i[N-a+1]=left;
	}
	printf("array:\n");
	for (a=1;a<=N;a++){
		printf("%4d",i[a]);
	}
	printf("\n");
	return 0;
}
