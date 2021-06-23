#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXWEIGHT 10

void exp1(){
	int item[2][5] ={{6,3,5,4,6},{2,2,6,5,4}};
	int n = pow(2,5);
	int i,j,k,s,weight = 0,value = 0,maxvalue = 0;
	int now[5] = {0};
	int temp[5];
	for(i = 1 ; i <= n ; i++){
		weight = 0,value = 0;
		memset(now,0,5 * sizeof(int));
		s = i;
		for(j = 0 ; s != 0 ; j++){
			now[j] = s%2;
			s /= 2;
		}
		for(k = 0 ; k < 5 ; k++){
			if(now[k] == 1){
				weight += item[1][k];
				if(weight <= MAXWEIGHT )	
					value += item[0][k];
				else break;
			}
		}
		if(value > maxvalue && k == 5){
			maxvalue = value;
			memcpy(temp,now,5*sizeof(int));
		}
	} 
	for(i = 0 ; i < 5 ; i++ ){
			if(temp[i] == 1)
				printf("%d	", i+1 );
		}
		printf("\n%d",maxvalue);
} 

int main(){
	exp1();
	return 0;
}
