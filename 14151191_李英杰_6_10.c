#include<stdio.h>
int main()
{  
	int i,j,cap,low,num,space,oth;
	char text[3][80];
	cap=low=num=space=oth=0;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行字符:\n",i+1);
		gets(text[i]);
		for(j=0;j<80&&text[i][j]!='\0';j++)
		{
			if(text[i][j]>=65&&text[i][j]<=90)
				cap++;
			else if(text[i][j]>='a'&&text[i][j]<='z')
				low++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				num++;
			else if(text[i][j]==' ')
				space++;
			else
				oth++;
		}
	}
	printf("\n");
	printf("大写字母个数为：%d\n",cap);
	printf("小写字母个数为：%d\n",low);
	printf("数字个数为：%d\n",num);
	printf("空格个数为：%d\n",space);
	printf("其他字符个数为：%d\n",oth);
	return 0;
}
