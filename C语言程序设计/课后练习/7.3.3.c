#include <stdio.h>

void main(){

	int i,min = 0,max = 0;
	int t;
	int x[10];
	for( i = 0 ; i < 10 ; i++ ){
		scanf("%d",&x[i]);
	}		
	for(i = 1 ; i < 10 ; i++ ){
		if( x[min] > x[i] ){
			min = i;
		}else if(x[max] < x[i] ){
			max = i;
		}
	}
	t = x[min];
	x[min] = x[max];
	x[max] = t;
	for( i = 0 ; i < 10 ; i++ ){
		printf("%d	",x[i]);
	}		
}
