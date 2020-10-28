/*输入三个实数，判断组成三角形形状。
若为正三角形则输出1，为等腰三角形则输出2，为任意三角形则输出3，不能构成三角形则输出0*/
#include <stdio.h>
int main (void)
{
	double a,b,c;
	printf("请输入三个正数：");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if(a + b < c || a + c < b || b + c < a)
		printf("0");
	else{
		if (a == b && b == c)
			printf("1");
		else if(a == b || b == c || a == c)
			printf("2");
		else
			printf("3");
		}
	return 0;
}
