#include<stdio.h>
int main(){
	int n;
	printf("Enter Value: ");
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<=n-1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=i;k<n;k++){
			printf(" *");
		}
		printf("\n");
	}
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=i;k<n;k++){
			printf(" *");
		}
		printf("\n");
	}
}
