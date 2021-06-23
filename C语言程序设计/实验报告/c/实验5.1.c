#include <stdio.h>

void exp(){
	int x[5] = {1,3,5,7,9};
	int y[5] = {2,4,6,8,10};
	int z[10] = {0};
	int i = 0,j = 0,k = 0;
	while(i < 5 && j < 5){
		if(x[i] < y[j]){
			z[k++] = x[i++];
		}
		else{
			z[k++] = y[j++];
		}
	}
	while(i < 5){
		z[k++] = x[i++];
	}
	while(j < 5){
		z[k++] = y[j++];
	}
	for(i = 0 ; i < 10 ; i++){
		printf("%d ",z[i]);
	}
} 

int main(){
	exp();
}
