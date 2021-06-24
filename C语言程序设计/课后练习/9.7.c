#include <stdio.h>
#include <string.h>

int totsubstrnum(char *str,char *substr){
	int i = 0,count = 0,len1,len2;
	len1 = strlen(str);
	len2 = strlen(substr);
	while(i <= len1-len2){
		if(strncmp(str+i,substr,len2) == 0){
			count++;
			i += len2; 
		}
		else{
			i++;
		}
	}
	return count;
}

int main(){
	char str[80],substr[80];
	gets(str);
	gets(substr);
	printf("%d",totsubstrnum(str,substr));
}
