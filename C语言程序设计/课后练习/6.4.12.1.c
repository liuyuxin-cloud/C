#include<stdio.h>


int main(){

	int i,j ;
	for( i = 0 ; i < 3 ; i++){
		for( j = 0 ; j < i ; j++ ){
			putchar(' ');
		}
		for( j = 0 ; j < (3 - i) * 2 - 1 ; j++ ){
			putchar('*');
		}
		putchar('\n');
	}
	for( i = 2 ; i > 0 ; i--){
		for( j = 0 ; j < i-1 ; j++ ){
			putchar(' ');
		}
		for( j = 0 ; j < (3 - i) * 2 + 1 ; j++ ){
			putchar('*');
		}
		putchar('\n');
	}
	
}



