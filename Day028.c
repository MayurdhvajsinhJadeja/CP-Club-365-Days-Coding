#include<stdio.h>
int main(){
    int i,n,k,height[n],max=height[0];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
    for(i=0;i<n;i++){
        if(height[i]>max){
            max=height[i];
        }
    }
    if(max<=k){
        printf("0");
    }
    else{
        printf("%d",max-k);
    }
    return 0;
}
