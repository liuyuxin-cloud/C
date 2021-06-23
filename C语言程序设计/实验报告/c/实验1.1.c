#include <stdio.h>
#include <math.h>

void exp(){
	int a,b,c;
	double x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	if( b*b - 4*a*c < 0){
		printf("Error!");
		exit(1);
	}
	x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
	x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;
	printf("%lf		%lf",x1,x2);
}
int main(){
	Exp();
}

