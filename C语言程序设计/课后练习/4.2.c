//第四章 3.2

#include <stdio.h>

int main(){
	
	int a,b ;
	scanf("%d%d",&a,&b);
	
	a = a + b ;
	b = a - b ;
	a = a - b ;
 
 	printf("交换后a = %d , b = %d",a,b);
	
	
} 


