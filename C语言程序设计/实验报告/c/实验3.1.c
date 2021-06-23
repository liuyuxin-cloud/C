#include <stdio.h>

void Exp(){
	int x,i = 0;
	scanf("%d",&x);
	while(x){
		x = x / 10;
		i++; 
	}
	printf("%d",i);
}

int main(){
	Exp();
}
