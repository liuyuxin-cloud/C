/*��������ʵ�����ж������������״��
��Ϊ�������������1��Ϊ���������������2��Ϊ���������������3�����ܹ��������������0*/
#include <stdio.h>
int main (void)
{
	double a,b,c;
	printf("����������������");
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
