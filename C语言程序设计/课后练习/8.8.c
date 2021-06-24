#include <stdio.h>

long f(int n){
	if(n <= 2)	return 1;
	return (f(n-1) + f(n-2));
}

int main(){
	int i;
	for(i = 1 ; i <= 40 ; i++){
		printf("µÚ%dÏîÊÇ%d\n",i,f(i));
	}
}
