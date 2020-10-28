//给你n个整数，求他们中所有奇数的乘积。
#include <stdio.h>
int main (void)
{
	int n,a[n];
	int i;
	int m = 1;
	
	printf("输入整数的个数是：");
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int)*n);
	
	printf("整数分别是：");
	for( i = 0 ; i < n ; i++){
		scanf("%d ",&a[i]);
	}
	
	for( i = 0 ; i < n ; i++){
		if( a[i] % 2 == 1)
			m *= a[i]; 
	}
	
	printf("其中奇数的积是%d",m);
	
	return 0;
}
