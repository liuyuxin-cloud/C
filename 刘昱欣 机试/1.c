#include <stdio.h>
int main (void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	
	c = a % b;
	printf("%d %% %d  = %d\n",a,b,c);

	puts("a % b = c");        //²»»á 
	
	return 0;
	
}
