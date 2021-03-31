#include <stdio.h>

int main(){

	int num1,num2,num3 ;
	int min,max;
	scanf("%d%d%d",&num1,&num2,&num3);

	max = (num1 > num2) ? ( num1 > num3 ? num1 : (num3 > num2 ? num3 : num2 )): ((num2 > num3 ) ? num2 : num3);
	min = (num1 < num2) ? ( num1 < num3 ? num1 : (num3 < num2 ? num3 : num2 )): ((num2 < num3 ) ? num2 : num3);

	if(max == num1 || min == num1 ){
		if(max == num2 || min == num2)
			printf("%d<%d<%d",min,num3,max);
	}
	if(max == num3 || min == num3 ){
		if(max == num2 || min == num2)
			printf("%d<%d<%d",min,num1,max);
	}
	if(max == num1 || min == num1 ){
		if(max == num3 || min == num3)
			printf("%d<%d<%d",min,num2,max);
	}
		
	
}
