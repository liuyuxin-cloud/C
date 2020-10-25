#include <stdio.h>

int main(void)
{
	unsigned s = 0;
	unsigned a,b;
	unsigned c = 0;
	unsigned d = 0;
	int i;
	unsigned t;
	
	a = 1;
	s = s | a;
	
	b = 1 << 5;
	s = s | b;
	
	for(i = 9 ; i < 15 ; i++)
	{
		t = 1 << i;
		c = c | t;
	}
	s = s | c;
	for(i = 25 ; i < 32 ; i++)
	{
		t = 1 << i;
		d = d | t;
	}
	s = s | d;
	printf("%u",s);
	return 0;
	
}
