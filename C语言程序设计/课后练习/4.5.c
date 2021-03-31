#include <stdio.h>

int main(){

	int a ,b ,c;
	int delta;
	
	scanf("%d%d%d",&a,&b,&c);
	delta = b * b - 4 * a * c ;
	 
	if( delta < 0 ){
		printf("нч╫Б");
	}else if( delta == 0 ){
		printf("x1 = x2 = %lf",(-b + delta) / (-2 * a));
	}else{
		printf("x1 = %d \n x2 = %d ",(-b + delta) / (-2 * a),(-b - delta) / (-2 * a));
	}
	
	
	
}
