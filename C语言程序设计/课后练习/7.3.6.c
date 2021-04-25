#include <stdio.h>
void main(){

	int i,j;
	int x[6][6];
	
	for( i = 0 ; i < 6 ; i++ ){
		for( j = 0 ; j < 6 ; j++ ){
			x[i][0] = 1;
			x[i][j] = 1;
		}
	}
	for( i = 2 ; i < 6 ; i++ ){
		for( j = 1 ; j <= i-1 ; j++ ){
			x[i][j] = x[i-1][j-1] + x[i-1][j];
		}
	}
	for( i = 0 ; i < 6 ; i++ ){
		for( j = 0 ; j < 6-i ; j++ ){
			putchar(' ');
		}
		for( j = 0 ; j < i+1 ; j++ ){
			printf("%d ",x[i][j]);
		} 
		putchar('\n');
	}
}
