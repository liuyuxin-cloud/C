//��ӡ��1~100���ڵ�������ÿ�������һ��
#include <stdio.h>
int main (void)
{
	int a,b,c,i;
	for ( a = 3 ; a < 100 ; a++ ){
		for( b = 2 ; b < a - 1 ; b++){
			c = a % b ;
			if (c == 0)
				break; 
		}
		for(i = 1;i <= 5;i++){
			if( b == a - 1 ){
				printf("%d",a);
				continue;
			}
			if (i % 5 == 0){
				putchar('\n');
				break;
			}
			
		
		}
	}
	return 0;
}
