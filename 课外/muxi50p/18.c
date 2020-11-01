#include <stdio.h>
int f(x){
	if (x > 2) 
		return x = f( x - 1 ) + f( x - 2);
	else if ( x == 1 || x == 2 )
		return 1;
}
int main (void)
{
	int n;
	int s = 0;
	scanf("%d",&n);
	
	s = f(n);
	printf("%d",s);
}
