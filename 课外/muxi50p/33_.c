//������һ���и��������α߳� N��3��N��20������������αߵ�ĳ���ַ� C�����һ���ո�
#include <stdio.h>
int main (void)
{
	int a,i; 
	char c;
	scanf("%d %c",&a,&c);
	
	for( i = 0 ; i < a ; i++){
		printf("%c",c);
	}
	int m = 0;
	if( a % 2 ){
		m = ( a + 1 ) / 2;
	}
	else{
		m = a % 2;
	}
	printf("\n");
	for( i = 0 ; i < m - 2  ; i++){
		printf("%c",c);
		int j; 
		for( j = 0 ; j < a - 2 ; j++){
			printf(" ");
		}
		printf("%c",c);
	}
		for( i = 0 ; i < a ; i++){
		printf("%c",c);
	}
	return 0;
	
 } 

