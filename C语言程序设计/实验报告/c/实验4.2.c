#include <stdio.h>

void exp(){
	int x[7] = {1,3,5,1,2,2,2};
	int y[7] = {1,1,4,3,2,3,6};
	int i,j,k,a,b,c,count1,count2;
	for(i = 0 ; i < 6 ; i++){
		for(j = i+1 ; j < 7 ; j++){
			a = y[j] - y[i];
			b = x[i] - x[j];
			c = x[i]*y[j] - y[i]*x[j];
			count1 = count2 = 0;
			for(k = 0 ; k < 7 ; k++){
				if(a*x[k] + b*y[k] > c){
					count1++;
				}
				if(a*x[k] + b*y[k] < c){
					count2++;
				}
			}
			if(count1 * count2 == 0){
				printf("%d--%d\n",i+1,j+1);
			}
			
		}
	}
} 

int main(){
	exp();
}
