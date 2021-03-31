#include <stdio.h>

int main(){

	int c;
	
	printf("*****Time*****\n");
	printf("1	morning\n");
	printf("2	afternoon\n");
	printf("3	night\n");
	printf("Please enter your choice:\n");
	
	scanf("%d",&c);

	
	switch( c ){
		case 1 : printf("Good morning\n");   break;
		case 2 : printf("Good afternoon\n"); break;
		case 3 : printf("GOod night\n");     break;
		default : printf("Selection error!");break;
	}
	
	
}
