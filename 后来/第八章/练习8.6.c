//计算阶乘
#include <stdio.h>
int fac(int n)
{
	int s = 1;
	while(n > 0){
		s *= n;
		n--;
	} 
 } 
int main (void)
{
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	
	printf("%d的阶乘为%d \n",num,fac(num));
	
	return 0;
}
