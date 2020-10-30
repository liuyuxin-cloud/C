//求两个正整数的最小公倍数 
#include <stdio.h>
int main (void)
{
	int x,y,z;
	int a,b;
	int t = 0;
	printf("请输入两个正整数：");
	scanf("%d %d",&x,&y);
	
	a = x;
	b = y;
	
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
		
	z = a * b / x;
	printf("最小公倍数是%d",z);
 } 

