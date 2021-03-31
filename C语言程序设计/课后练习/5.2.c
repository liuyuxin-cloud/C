#include <stdio.h>

int main(){

	int x,sign;
	scanf("%d",&x);
	
	sign = x == 0 ? 0 : (x > 0 ? 1 : -1 );
	printf("%d",sign);
	
}
