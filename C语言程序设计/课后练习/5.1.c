#include <stdio.h>

int main(){

	int a ;
	scanf("%d",&a);
	
	if(a > 0){
		printf("输入的整数为正数\n");
	} else if(a == 0){
		printf("输入的整数为0\n");
	}else{
		printf("输入的整数为负数\n");
	}
	
	if(a % 2){
		printf("输入的整数是奇数\n");
	}else{
		printf("输入的整数是偶数\n"); 
	}
	
}
