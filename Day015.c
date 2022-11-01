#include <stdio.h>
#include <string.h>
char *Duplicate(char str[]){
	int newind = 0;
	int i;
	for (i=0; i<=strlen(str); i++){
		int j;
		for (j=0; j<i; j++){
			if (str[i] == str[j]){
				break;
			}
		}
		if (j == i){
			str[newind++] = str[i];
		}
	}
	return str;
}
int main()
{
	char str[20];
	printf("Enter String: ");
	gets(str);
	printf(Duplicate(str));
	return 0;
}


