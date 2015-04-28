int main(){
	int a[15],i,j,b,c,d=1,max,min,k=0;
	for(i=0;i<=14;i++){
		scanf("%d",&a[i]);
	}
	printf("你想查找的数是：");
	scanf("%d",&c);
    for(i=0;i<=14;i++){
    	for(j=14;j>=i;j--){
    		if(a[j]>a[j-1])
    		{b=a[j-1];
    		a[j-1]=a[j];
    		a[j]=b;
			}
		}
	}
		if(c>a[i/2]){
			max=i/2;
			min=0;
		}else{max=i;
		min=i/2;
		}
		for(k=min;k<=max;k++){
			if(a[k]==c){
				printf("你想查找的数是第%d个数",k+1);
				d=0;
				break;
			}
		}
		if(d==1){
			printf("无此数"); 
		}
	return 0;
}
