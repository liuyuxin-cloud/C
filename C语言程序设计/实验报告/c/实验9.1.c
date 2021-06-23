#include <stdio.h>
#include <math.h>
int exp1(int a)
{
	if(a == 1||a == 2) 	return 1;
 	else return exp1(a-1) + exp1(a-2); 
}
void main(){
	printf("%d",exp1(10));
} 

