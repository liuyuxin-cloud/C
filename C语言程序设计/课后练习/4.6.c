#include <stdio.h>

int main(){

	int a ;
	int day,hour,min,second;
	scanf("%d",&a);
	
	day = a / ( 60 * 60 * 24 );
	hour = a % ( 60 * 60 * 60 * 24 ) / ( 60 * 60 );
	min = a % ( 60 * 60 * 60 ) / 60 ;
	second = a % 60 ;
	printf("从2021年3月20日开始已经过了%d天,现在时间是%d时%d分%d秒",day,hour,min,second); 
	
}
