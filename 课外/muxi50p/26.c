//����������������С������ 
#include <stdio.h>
int main (void)
{
	int x,y,z;
	int a,b;
	int t = 0;
	printf("������������������");
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
	printf("��С��������%d",z);
 } 

