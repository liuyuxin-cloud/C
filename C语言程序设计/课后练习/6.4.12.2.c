#include<stdio.h>


int main(){

	int i,j ;
	for( i = 0 ; i < 5 ; i++){
		for( j = 0 ; j < 5 - i ; j++ ){
			putchar(' ');
		}
		for( j = 0 ; j < 5 ; j++ ){
			putchar('*');
		}
		putchar('\n');
	}

	
}



