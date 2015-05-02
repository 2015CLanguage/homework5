#include <stdio.h>

int main()
{
    int a[11],b[11],i,ram;
    printf("输入10个数以空格隔开:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
	  for(i=0;i<10;i++)
		    b[9-i]=a[i];
	  printf("逆向排序：");
	  for(i=0;i<10;i++)
		    printf("%3d",b[i]);
	  return 0;
}


