#include <stdio.h>
int main (void)
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	
	printf("%6.2f",a / b);           //6表示最少输出的整数位数，2表示输出的小数位数 
	
	return 0;
 } 
