#include <stdio.h>
#include <string.h>

void fun(char *s){
	char *pstr;
	for(pstr = s ; *pstr != '\0' ; pstr++){
		while(*pstr >= '0' && *pstr <= '9'){
			strcpy(pstr,pstr+1);
		}
	}
} 

int main(){
	char str[80];
	gets(str);
	fun(str);
	printf("%s",str);
}
