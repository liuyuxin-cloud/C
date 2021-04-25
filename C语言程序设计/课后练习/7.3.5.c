#include <stdio.h>

void main(){

	int i,j;
	int x[5][5];
	int sum = 0;
	int mul = 1;
	for( i = 0 ; i < 5 ; i++ ){
		for( j = 0 ; j < 5 ; j++ ){
			scanf("%d",&x[i][j]);
		}
	}
	for( i = 0 ; i < 5 ; i++ ){
		for( j = 0 ; j < 5 ; j++ ){
			if( i == j || i == 4-j ){
				sum += x[i][j];
			}
		}
	}
	printf("%d	",sum);
	for( i = 0 ; i < 5 ; i++ ){
		for( j = 0 ; j < 5 ; j++ ){
			if( (i == j && (i+1)%2 == 0 && (j+1)%2 == 0 )||(i == 4-j && (i+1)%2 == 0 && (j+1)%2 == 0 )){
				mul *= x[i][j];
			}
		}
	}
	printf("%d",mul);
		
}
