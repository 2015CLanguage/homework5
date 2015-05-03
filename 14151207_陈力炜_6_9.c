#include <stdio.h>
#define N 6
int main(){
	int i[N],a,b,t,max,mid,min,sp,input;
	t=0;
	printf("enter data:\n");
	for (a=1;a<=N;a++){
		scanf("%d",&i[a]);
	}
	for (a=1;a<=N-1;a++){
		for(b=a+1;b<=N;b++){
		
			if (i[a]>i[b]){
				min=i[b];
				max=i[a];
				i[a]=min;
				i[b]=max;
			}

		}
	}
	printf("what are you looking for?\n");
	scanf("%d",&input);
	min=1;
	max=N;
	while(t==0){
		printf("a");
		if (input>i[max] || input<i[min]){t=3;}
		sp=N%2;
		if (sp==1) {mid=(N-1)/2;}
		else {mid=N/2;}
		if (input==i[min]){
			t=1;
		}
		else if (input==i[max]){
			t=2;
		}
		if (max-min<=1){
			t=3;
		}
		if (input>=i[mid]){min=mid;}
		else max=mid;
	}
	if (t==1){printf("position %d\n",min);}
	if (t==2){printf("position %d\n",max);}
	if (t==3){printf("Not Found\n");}
	return 0;
}
