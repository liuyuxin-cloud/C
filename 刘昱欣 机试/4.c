#include <stdio.h>
int main (void){
	int a;              
	scanf("%d",&a);                         // ‰»Î≥…º®                            
	switch(a / 10){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:  printf("C");                   break;
		case 6:
		case 7:
		case 8:  printf("B");                   break;
		case 9:
		case 10: printf("A");                   break; 
	}
	return 0;
}
