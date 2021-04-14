#include<stdio.h>

int main(){
	
	int x = 2;
	int sum = 0;
	while( x <= 100 ){
		
		sum += x ;
		x += 2;
	}
	printf("%d",sum);
}



