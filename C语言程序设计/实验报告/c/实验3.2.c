#include <stdio.h>

void Exp(){
	int x,y,i,j,k,t;
	scanf("%d",&x);
	y = x*x*x;
	t = 0;
	
	for(i = 1 ; i < y ; i+=2 ){
		j = i;
		t = 0; 
		while(t < y){
			t += j;
			j += 2;
			if(t == y){
				printf("%d^3=",x);
				for(k = i ; k < j-1 ; k+=2){
					printf("%d+",k);
				}
				printf("%d",j-1);
			}
		}
	}
}

int main(){
	Exp();
}
