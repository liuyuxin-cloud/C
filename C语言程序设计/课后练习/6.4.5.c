#include<stdio.h>

int main(){
	
	int i; 
	double x = 1;
	for( i = 2 ; i <= 100 ; i+= 2 ){
		x *=(double) i * i / ((i - 1)*(i + 1));
		
	} 
	printf("%lf",2*x);
}



