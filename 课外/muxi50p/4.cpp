//求两个正整数的最大公因子（欧几里德算法)
#include <stdio.h>
int main (void)
{
	int x,y;
	int t = 0;
	printf("请输入两个正整数：");
	scanf("%d %d",&x,&y);
	
	while( x % y != 0 && y % x != 0 ){
		if ( x > y ){
			t = x % y;
			x = y;
			y = t;
		}
		else{
			t = y % x;
			y = x;
			x = t;
		}
	} 
	if( x > y )
		x = y;
	printf("最大公因数是%d",x);
 } 

