#include<stdio.h>


int main(){

	int i,j ;
	for( i = 1 ; i <= 5 ; i++){
		for( j = 0 ; j < i * 2 - 1 ; j++ ){
			putchar('*');
		}
		putchar('\n');
	}

	
}



