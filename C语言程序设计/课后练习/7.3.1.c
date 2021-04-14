#include<stdio.h>
#include<math.h>
#include<string.h>


void exp1(){
	
	int a[20];
	int i;
	int count = 0;
	int sum = 0;
	for( i = 0 ; i < 20 ; i++ ){
		scanf("%d",&a[i] );
	}
	for( i = 0 ; i < 20 ; i++ ){
		if( a[i] >= 0 ){
			count++;
			sum += a[i]; 
		}
	}
	printf("%d",count);
	printf("%d",sum);
	
} 

int main(){
	exp1();
	return 0;
}

