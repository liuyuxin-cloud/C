#include<stdio.h>

int main(){
	
	int a,n,i,j;
	int x = 0;
	int sum = 0;
	for( i = 1 ; i <= n ; i++ ){
		for( j = 1 ; j <= i ; j++ ){
			x *= a ;
		}
		sum += x ;
	}
	printf("%d",sum);
}



