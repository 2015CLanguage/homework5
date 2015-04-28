# homework5
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[15],i,mid,top=14,low=0,temp=0,M;
    //get the data
    printf("please put in the data from small to big !\n");
    for(i=0;i<15;i++){
        scanf("%d",&a[i]);
    }
    printf("put in the aim number !\n");
    scanf("%d",&M);
    printf("the array is :\n");
    for(i=0;i<=14;i++)
        printf("%5d",a[i]);
        
    printf("\n");
    //looking for the number`s position
    if(M<a[0]||M>a[14])
        temp=temp;
    else{
        while(low<=top){
            mid=(low+top)/2;
            if(M==a[mid])
            {
                temp=temp+1;
                break;
            }
            else if(M>a[mid])
                low=mid+1;
            else if(M<a[mid])
                top=mid-1;
        }
    }
    printf("\n");
    if(temp==1)
        printf("the number is in the %d position of the array .\n",mid+1);
            
    else if(temp==0)
        printf("cann`t find !\n");
    return 0;
}
