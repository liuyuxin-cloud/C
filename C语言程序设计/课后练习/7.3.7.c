#include <stdio.h>
#include <string.h>
int main(){
	
	int i = 0 ;
	char a[100] ;
	scanf("%s",a);
	for( i = strlen(a) ; i >= 0 ; i-- ){
		printf("%c",a[i]);
	} 
	return 0;
} 
