/*给定 N 个非 0 的个位数字，用其中任意 2 个数字都可以组合成 1 个 2 位的数字。
要求所有可能组合出来的 2 位数字的和。*/
#include <stdio.h>

int fun(int a[],int n)
{
	if(n >= 0){
		return a[n - 1] + fun(a,n - 1);
	}
}
int main (void)
{
	int n;
	int i,j;
	int sum = 0;
	scanf("%d",&n);
	int a[11];
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	sum = fun(a,n);
	printf("%d",sum);
	return 0;
 } 


