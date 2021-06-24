#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *substr(char *str,int s,int l){
	static char sstr[80];
	int i;
	for(i = 0 ; i < l && str[s+i] != '\0' ; i++){
		sstr[i] = str[s+i];
	}
	sstr[i] = '\0';
	return (sstr);
}

int main(){
	char str[80],s,l;
	gets(str);
	scanf("%d",&s);
	scanf("%d",&l);
	printf("%s\n",substr(str,s,l));
}
