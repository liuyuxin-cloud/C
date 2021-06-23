void trangle(){
	
	int size,i,j;
	scanf("%d",&size);
	
	for( i = 0 ; i < size ; i++ ){
		if( i == 0 ){
			for( j = 0 ; j < size - 1 - i ; j++ ){
				putchar(' ');
			}
			putchar('*'); 
			putchar('\n');
		}
		else if( i == size - 1 ){
			for( j = 0 ; j < size * 2 - 1 ; j++ ){
				putchar('*');
			}
		}
		else{
			for( j = 0 ; j < size - i - 1 ; j++ ){
				putchar(' ');
			}
			putchar('*');
			for( j = 0 ; j < i * 2 - 1 ; j++ ){
				putchar(' ');
			}
			putchar('*');
			putchar('\n');
		}
	}
} 

int main(){
	trangle();
}

