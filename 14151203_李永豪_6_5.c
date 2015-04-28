# homework5
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5],b[5],i;
    //put in the numbers
    printf("please put in the numbers !");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    
    //deposit number in contrast order
    for(i=0;i<5;i++){
        b[i]=a[4-i];
    }
    printf("the orginal order is :\n");
    for(i=0;i<5;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    printf("the contrast order is :\n");
    for(i=0;i<5;i++){
        printf("%5d",b[i]);
    }
    printf("\n");
    return 0;
}
