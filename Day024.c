#include<stdio.h>
#include<string.h>
int main(){
	int height[26],i,max=0,area,a,b;
	for(i=0;i<26;i++){
		scanf("%d",&height[i]);
	}
	char s[11];
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a;i++){
		b=s[i]-97;
		if(height[b]>max){
			max=height[b];
		}
	}
	area=max*a;
	printf("%d",area);
	return 0;
}
