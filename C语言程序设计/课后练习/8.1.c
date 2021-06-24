#include <stdio.h>
#include <math.h>
int isPrime(int x){
	int i;
	if(x < 2){
		return 0;
	}
	for(i = 2 ; i < sqrt(x) ; i++){
		if(x % i == 0)  return 1;
	}
	return 0;
}

int main(){
	int x;
	scanf("%d",&x);
	isPrime(x) ? printf("是素数") : printf("不是素数"); 
} 
