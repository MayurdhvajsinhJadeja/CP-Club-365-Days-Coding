#include<stdio.h>
int main(){
	int n;
	int x, y, z;
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x,&y,&z);
		printf("%d\n",x-y+z);
	}
	return 0;
}
