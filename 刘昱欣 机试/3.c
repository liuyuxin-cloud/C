#include <stdio.h>
int function(int a,int b, int c)
{
	return ( a < b && a < c ) ? a : (( b < a && b < c) ? b : c) ;
}

