#include <stdio.h>

int main(){

	unsigned short a,b;
	scanf("%4x",&a);
	b = (a & 0x000f)<<12;
	b += (a & 0x00f0 )<<4;
	b += (a & 0x0f00 )>>4;
	b += (a & 0xf000 )>>12;
	printf("%4x\n",b); 
}
