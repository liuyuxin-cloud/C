#include<stdio.h>
#include<math.h>

int main(){

	double a = 0.0;
	double s = 0.0;
	double x;
	double out = 0.0;
	int n = 1 ;
	int i = 0; 
	a = x;
	out = x; 
	scanf("%lf",&x);	
	do{
		a = -a * x * x / ((n + 1 )* ( n + 2));
		out += a;
		n += 2;
		i++;
	}while(fabs(a)>= 1e-5);
	printf("%lf,%d",out,i);
}



