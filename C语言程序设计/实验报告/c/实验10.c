#include <stdio.h>

int weight[5] = {2,2,6,5,4};
int value[5] = {6,3,5,4,6};

int exp10(int num,int maxweight){
	int value1,value2,max = 0;
	if(weight[num] <= maxweight && num != -1){
		value1 = exp10(num-1,maxweight-weight[num]) + value[num];
		value2 = exp10(num-1,maxweight);
		max = (value1 > value2) ? value1 : value2;		
	}
	return max;
}

int main(){
	int result;
	result = exp10(4,10);
	printf("%d",result);
}
