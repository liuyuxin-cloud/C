//There are some students in a class, Can you help teacher find the highest student 
//There are some cases. The first line contains an integer t, indicate the cases;
// Each case have an integer n ( 1 ¡Ü n ¡Ü 100 ) , followed n students¡¯ height.
#include <stdio.h>
int main (void)
{
	int t,i;
	double a[101];
	scanf("%d",&t);
	while( t ){
		t--;
		int n;
		scanf("%d",&n);
		double max = 0;
		for( i = 0 ; i < n ; i++){
			scanf("%lf",&a[i]);
		}
		max = a[0];
		for( i = 1 ; i < n ; i++){
			max = ( max > a[i] ) ? max : a[i] ;
		}
		printf("%.1f",max);
	}
	return 0;
}
