#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100],tmp[100];
	int i,j;
	gets(str);
	for(i = 0,j = 0 ; i < strlen(str) ; i++){
		if(str[i] != 'c'){
			tmp[j++] = str[i];
		}
	}
	tmp[j] = '\0';
	strcpy(str,tmp);
	printf("%s\n",str);

	return 0;
} 
