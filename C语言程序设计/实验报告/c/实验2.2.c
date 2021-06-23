#include <stdio.h>

void Exp(){
	
	double f1,f2,f3;
	double ave;
	scanf("%lf%lf%lf",&f1,&f2,&f3);
	ave = (f1+f2+f3) / 3;
	ave = (int)((ave + 0.005) * 100) / 100.0;
	printf("%-8.2lf",ave); 
	
}

int main(){
	Exp();
}
