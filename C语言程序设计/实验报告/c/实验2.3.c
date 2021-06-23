#include <stdio.h>

void Exp1(){
	int a,b;
	int temp;
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("%d	%d",a,b);
} 

void Exp2(){
	int a,b;
	scanf("%d%d",&a,&b);
	a = a+b;
	b = a-b;
	a = -(a-b);
	printf("%d	%d",a,b);
}

void Exp3(){
	int a,b;
	scanf("%d%d",&a,&b);
	a = a-b;
	b = a+b;
	a = a-b;
	printf("%d	%d",a,b);	
}

void Exp4(){
	int a,b;
	scanf("%d%d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d	%d",a,b);	
}
int main(){
	Exp3();
}
