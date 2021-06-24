#include <stdio.h>

void MyStrcat(char str1[],char str2[]){
	int i=0,j=0;
	while(str1[i] != '\0'){
		i++;
	}
	while(str2[j] != '\0'){
		str1[i++] = str2[j++];
	}
	str1[i] = '\0';
}

int main(){
	char s[80],t[80];
	
	gets(s);
	gets(t);
	MyStrcat(s,t);
	puts(s);
}
