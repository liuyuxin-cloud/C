#include <stdio.h>
int f(int a,int b){                     //求两数的最大公因数     
	while( a % b != 0 && b % a != 0){     //可用__gcd()函数求最大公因数 在algorithm 库中 
		if(a > b){
			a %= b;
		}
		else{
			b %= a;
		}
	} 
	return ( a > b ) ? b : a;
}

int main (void)
{
	int n;
	scanf("%d",&n);
	
	int a[1000] = {0};
	int i,j;
	int sum = 0;
	for( i = 0 ; i < n ; i++){                       //赋值 
		a[i] = i + 1;
	}
	for( i = 0 ; i < n - 1 ; i++){
		for( j = 1 ; j < n - 1; j++){
			sum += f(a[i],a[j]);
		}
	} 
	printf("%d",sum / 2 - 1 );                      //重复计算 
	return 0;
 } 
