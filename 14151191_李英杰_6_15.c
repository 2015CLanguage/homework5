#include<stdio.h>
#include<string.h>
int main()
{  
	int i;
	char s1[50],s2[50];
	printf("请输入s2:\n");
	scanf("%s",s2);
	for(i=0;i<=strlen(s2);i++)
	{
		s1[i]=s2[i];
	}
	printf("s1为:\n%s\n",s1);
	return 0;
}
