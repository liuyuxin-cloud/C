#include <stdio.h>
#include <string.h>
int main(){
	char str[80],*pStart,*pEnd;
	int len;
	gets(str);
	len = strlen(str);
	pStart = str;
	pEnd = str+len-1;
	while(*pStart == *pEnd && pStart <= pEnd){
		pStart++;
		pEnd--;
	}
	if(pStart < pEnd){
		printf("²»ÊÇ\n"); 
	}else{
		printf("ÊÇ\n"); 
	}
}
