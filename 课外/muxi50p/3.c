//´òÓ¡É³Â©Í¼Ñù 
#include <stdio.h>
int main (void)
{
	int i,j;
	for(i = 1;i <= 2;i++){ 
    	for(j = 1 ; j < i ; j++)
			putchar(' ');
		for(j = 1 ; j <= (3 - i)*2 + 1 ; j++)
			putchar('*');
		putchar('\n');
		}
	for(i = 1;i <= 3;i++){ 
    	for(j = 1;j <= 3 - i;j++)
			putchar(' ');
		for(j = 1;j <= (i - 1)*2 + 1;j++)
			putchar('*'); 
		putchar('\n');
		}
	return 0;
} 
