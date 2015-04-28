#include<stdio.h>
void main()
{
	int s[10],i,j,a,b,t;
    for(i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	for(j=0;j<10;j++){
		for(a=j;a<10;a++){
            if(s[a]<s[j]){
				t=s[j];
				s[j]=s[a];
				s[a]=t;
			}
		}
	}
	for(b=0;b<10;b++){
		printf("%d",s[b]);
	}
}
