#include<stdio.h>
int main(){
	int t,n=0,k=0,a,b;
	int arr[n],arrn[k];
	int i,j,p;
	printf("Enter Numer of Inputs: ");
	scanf("%d",&t);
	for(i=0;i<t;i++){
		printf("Enter Number of Element: ");
		scanf("%d",&n);
		for(j=0;j<n;j++){
			printf("Enter array: ");
			scanf("%d",&arr[j]);
		}
		printf("Enter Number of Element of new array: ");
		scanf("%d",&k);
		for(j=0;j<k;j++){
			printf("Enter array: ");
			scanf("%d",&arrn[j]);
			for(p=0;p<n;p++){
				if(arr[p]==arrn[j]){
					arr[p]=-1;
				}
			}
		}
		for(b=0;b<n;b++){
			if(arr[b]!=-1){
				printf("%d ",arr[b]);
			}	
		}
		printf("\n");
	}
	
	return 0;
}

