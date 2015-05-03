#include <stdio.h>
int main(){

	int a,b,min,max,i[10];
	for (a=0;a<=9;a++){
	
		printf("i[%d]=",a);
		scanf("%d",&i[a]);
	}
	for (a=0;a<=8;a++){
		for(b=a+1;b<=9;b++){
		
			if (i[a]>i[b]){
				min=i[b];
				max=i[a];
				i[a]=min;
				i[b]=max;
			}

		}
	}
	printf("\nThe sorted umers:\n");
	for (a=0;a<=9;a++){
	
		printf("%5d",i[a]);
	}
	printf("\n");
	return 0;
}
