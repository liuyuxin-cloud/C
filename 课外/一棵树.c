#include <stdio.h>
int main (void)
{
	int i,j;
	for( i = 0 ; i < 6 ; i++ ){                    //打印上边的 
		for( j = 0 ; j < ( 10 - i ) ; j++){
			putchar(' '); 
		}
		for( j = 0 ; j < i * 2 - 1 ; j++)
		{
			putchar('*');
		}        
		if( i == 5 )                               //最后一行不换行 
			continue;                
		putchar('\n');
	}
	
	for( i = 0 ; i < 10 ; i++ ){                  //打印下边的 
		for( j = 0 ; j < ( 10 - i ) ; j++){
			putchar(' '); 
		}
		for( j = 0 ; j < i * 2 - 1 ; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	
	for( i = 0 ; i < 9 ; i++){                     //打印树干 
		for( j = 0 ; j < 8 ; j++){
			putchar(' ');
		}
		for( j = 0 ; j < 3 ; j++){
			putchar('*');
		}
		putchar('\n');
	}
	return 0 ;
}
