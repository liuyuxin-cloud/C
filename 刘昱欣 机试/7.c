#include <stdio.h>

unsigned inverse(unsigned x,int pos,int n)
{
	int i = 0;
	unsigned m = 1U;
	for(i = 0;i < n - pos;i++){
		x = (x ^ (m << pos + i));
	}
	return x;
}


