# homework5

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //define
    int i,j,min,temp,a[10];
    //put in numbers
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    //    //printf the orginal number
    printf("the orginal numbers are:\n");
    for(i=0;i<=9;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    
    //get the minium number
    for(i=0;i<=9;i++){
        min=i;
        for(j=i+1;j<=9;j++){
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    //printf the dealt number
    printf("the dealt numbers are:\n");

    for(i=0;i<=9;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    
    return 0;
}
