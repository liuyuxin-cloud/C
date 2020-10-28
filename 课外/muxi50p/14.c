//输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
#include <stdio.h>
int main (void)
{
	int m,n ;
	int i,j;
	int a[j];
	int x,tmp;
	
	printf("请输入测试组数和数据个数：");
	scanf("%d %d",&m,&n);
	for(i = 0 ; i < m ; i++){
		printf("请输入这组数据：\n"); 
		for(j = 0 ; j < n ; j++){
			scanf("%d",&a[j]);
		}
		x = ( a[0] < a[1] ) ? 0 : 1 ;
		
		for(j = 2 ; j < n; j++){
			x = ( a[x] < a[j] ) ? x : j ;
		}
		tmp = a[0];
		a[0] = a[x];
		a[x] = tmp;
		
		for(j = 0 ; j < n ; j++){
			printf("%d ",a[j]);
		}
		putchar('\n');
	}
	return 0;
}
