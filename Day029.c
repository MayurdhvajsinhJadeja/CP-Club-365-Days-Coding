#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,sum=0;
    char str[100];
    scanf("%[^\n]s",str);
    for(i='A',j='a';i<='z';i++,j++){
        sum=0;
        for(k=0;k<=strlen(str);k++){
            if(str[i]==k || str[j]==k){
                sum=1;
                break;
            }
        }
    }
    if(sum==1){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }
    return 0;
}