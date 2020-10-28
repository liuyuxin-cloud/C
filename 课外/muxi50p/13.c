//给定区间 [2^-31,2^31] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
#include <stdio.h> 
int max(a,b,c)
{
	int x = 0;
	x = ((a + b) > c ) ? 1 : 0 ;
	return x; 
 } 
int main (void)
{
	int n,x ;
	int i,j ;
	int a[3] = {0};
	char str1[] = {"false"};
	char str2[] = {"true"};
	
	printf("请输入测试组数：\n");
	scanf("%d",&n);
	
	for( i = 0 ; i < n ; i++){
		printf("请输入第%d组数据：\n",i + 1);
		for( j = 0 ; j < 3 ; j++){
			scanf("%d",&a[j]);
		}
		x = max(a[0],a[1],a[2]);
		printf("Case #%d：%s\n",i + 1 ,((x == 1) ? str2 : str1 )); 
	}
	return 0;
}

