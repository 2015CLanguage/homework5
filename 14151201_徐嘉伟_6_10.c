#include<stdio.h>
int main()
{
	char str[3][80];
	int i,j,a=0,b=0,c=0,d=0;
	for(i=0;i<=2;i++){
		printf("请输入第%d行",i+1);
		gets(str[i]);
		for(j=0;j<=79&&str[i][j]!='\0';j++){
			if(str[i][j]<='Z'&&str[i][j]>='A'){
				a=a+1;
			}else if(str[i][j]>='a'&&str[i][j]<='z'){
				b=b+1;
			}else if(str[i][j]==' '){
				c=c+1;
			}else{
				d=d+1;
			}
		}
	}
	printf("大写字母有%d个，小写字母有%d个，空格有%d个，其他字符有%d个。",a,b,c,d);
return 0;}
