#include <stdio.h>

void exp2(){
	
	int sec,min,hour;
	scanf("%d",&sec);
	hour = sec / 3600;
	min = sec % 3600 / 60;
	sec = sec % 60;
	printf("%d--%d--%d",hour,min,sec);
	
}

int main(){
	exp2();
	return 0; 
}
