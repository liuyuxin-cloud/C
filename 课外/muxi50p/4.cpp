//��������������������ӣ�ŷ������㷨)
#include <stdio.h>
int main (void)
{
	int x,y;
	int t = 0;
	printf("������������������");
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
	printf("���������%d",x);
 } 

