#include <stdio.h>
#include <math.h>
int main (void)
{
	int n,x;
	int tmp = 0;
	int a = 0;
	int i;
	scanf("%d",&n);
	x = n;
	while(x){                     //����n��λ�� 
		x /= 10;
		a++;
	}
	while(1){
		tmp = 0; 
		x = n;
		for( i = a ; i > 0 ; i--){              //���nȡ����� 
			tmp += x % 10  * pow(10,i - 1);
			x /= 10;
		}  
		if( tmp == n)
			break;
		n++;
	}
	printf("%d",tmp);
	
	return 0;
}
