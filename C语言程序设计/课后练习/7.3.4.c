#include <stdio.h>

void main(){

	int i,j;
	int x[6];
	for( i = 0 ; i < 6 ; i++ ){
		scanf("%d",&x[i]);
	}		
	for( i = 0 ; i < 6 ; i++ ){
		for( j = 0 ; j < 6 ; j++ ){
			printf("%d	",x[ (j+6-i) % 6 ]);
		}
		putchar('\n');
	}
		
}
