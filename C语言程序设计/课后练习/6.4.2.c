#include<stdio.h>

int main(){
	
	int x = 1;
	int sum = 0;
	while( x <= 99 ){
		
		sum += x * (x + 1) * (x + 2) ;
		x += 2;
	}
	printf("%d",sum);
}



