#include<stdio.h>
int main()
{
	char a[5],b[5];
	int i;
	gets(a);
	for(i=0;i<=4;i++)
	{
		b[i]=a[i];
	}
	puts(b);
return 0;}
