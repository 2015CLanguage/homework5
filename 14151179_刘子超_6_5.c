#include<stdio.h>
void main()
{
	int s[5],c[5],i,a,j,b;
    for(i=0;i<5;i++){
		scanf("%d",&s[i]);
	}
	for(a=0;a<5;a++){
		c[a]=s[a];
	}
	for(j=0;j<5;j++){
		s[j]=c[4-j];
	}
	for(b=0;b<5;b++){
		printf("%d\n",s[b]);
	}
}
