#include <stdio.h>
int main (void)
{
	int n;
	int i;
	scanf("%d",&n);
	int a[10001] = {0};
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	
	for( i = 3 ; i < n + 1 ; i++){
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	printf("%d",a[n]);
	
	return 0;
}
