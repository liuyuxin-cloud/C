//给定一个 k 位整数N，请编写程序统计每种不同的个位数字出现的次数。
#include <stdio.h>
int main (void)
{
	int n,i,j,b[10] = {0};
	int a = 0;
	scanf("%d",&n);

	while( n ){
		switch( n % 10 ){
			case 0: b[0]++;           break;
			case 1: b[1]++;           break;
			case 2: b[2]++;           break;
			case 3: b[3]++;           break;
			case 4: b[4]++;           break;
			case 5: b[5]++;           break;
			case 6: b[6]++;           break;
			case 7: b[7]++;           break;
			case 8: b[8]++;           break;
			case 9: b[9]++;           break;	
		}
		n /= 10;
	}
	for( i = 0 ; i < 10 ; i++)
		printf("%d : %d\n",i,b[i]);
		
	return 0;
}
