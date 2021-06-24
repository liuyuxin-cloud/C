#include <stdio.h>
#include <string.h>

void strshif(char *s,int n){
	int i,len;
	char ch;
	len = strlen(s);
	for(i = 0 ; i < n ; i++){
		ch = s[0];
		strncpy(s,s+1,len-1);
		s[len-1] = ch;
	}
}

int main(){
	char str[] = "0123456789";
	strshif(str,3);
	printf("%s",str);
}
