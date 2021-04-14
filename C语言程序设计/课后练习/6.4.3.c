#include<stdio.h>

int main(){
	int i ;
	int x = 1;
	int sum = 0;
	int a = 0;
	
	while(x <= 10){

		for(i = 1 ; i <= x ; i++){
			a *= i ;		
		}
		sum += a; 
	}
	printf("%d",sum);
}



