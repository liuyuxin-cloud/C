#include <stdio.h>
int f(int a,int b){                     //���������������     
	while( a % b != 0 && b % a != 0){     //����__gcd()������������� ��algorithm ���� 
		if(a > b){
			a %= b;
		}
		else{
			b %= a;
		}
	} 
	return ( a > b ) ? b : a;
}

int main (void)
{
	int n;
	scanf("%d",&n);
	
	int a[1000] = {0};
	int i,j;
	int sum = 0;
	for( i = 0 ; i < n ; i++){                       //��ֵ 
		a[i] = i + 1;
	}
	for( i = 0 ; i < n - 1 ; i++){
		for( j = 1 ; j < n - 1; j++){
			sum += f(a[i],a[j]);
		}
	} 
	printf("%d",sum / 2 - 1 );                      //�ظ����� 
	return 0;
 } 
