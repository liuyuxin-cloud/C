#include <stdio.h>

int main(){

	int a ;
	int day,hour,min,second;
	scanf("%d",&a);
	
	day = a / ( 60 * 60 * 24 );
	hour = a % ( 60 * 60 * 60 * 24 ) / ( 60 * 60 );
	min = a % ( 60 * 60 * 60 ) / 60 ;
	second = a % 60 ;
	printf("��2021��3��20�տ�ʼ�Ѿ�����%d��,����ʱ����%dʱ%d��%d��",day,hour,min,second); 
	
}
