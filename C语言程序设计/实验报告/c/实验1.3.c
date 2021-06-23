#include <stdio.h>

void change(long x){
	
	int headtail,left,right;
	long int now;
	headtail = (x >> 24) + (x << 24);
	left = (x >> 8) & 0x0000ff00;
	right = (x << 8) & 0x00ff0000;
	now = headtail + left + right;
	printf("%x",now);
	
} 

int main(){
	long int x = 0x12345678;
	change(x);
}
