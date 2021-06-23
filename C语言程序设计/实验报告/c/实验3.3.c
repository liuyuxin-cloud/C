#include <stdio.h>
void exp(){
	int i,j;
	for(i = 0 ; i < 20 ; i++){
		for(j = 0 ; j < 33 ; j++){
			if((100-i-j) % 3 == 0 && 5*i + 3*j + (100-i-j) / 3 == 100){
				printf("母鸡%d只	公鸡%d只	小鸡%d只\n",i,j,100-i-j);
			}
		}
	}
}

int main(){
	exp();
}
