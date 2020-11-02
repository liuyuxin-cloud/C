//让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），
//换个格式来输出任一个不超过 3 位的正整数。
#include <stdio.h>
int main (void)
{
	int m;
	scanf("%d" , &m);
	int i;
	for ( i = 0 ; i < m / 100 ; i++ )
		printf("B");
	for ( i = 0 ; i< ( m % 100 ) / 10 ; i++)
	    printf("S");
	for ( i = 1 ; i <= ( m % 100 ) % 10 ; i++)
	    printf("%d" , i);
	printf("\n");
	return 0;
}
