//����׳�
#include <stdio.h>
int fac(int n)
{
	if( n > 0 )
		return n * fac( n - 1 );
	else
		return 1;
 } 
int main (void)
{
	int num;
	printf("������һ��������");
	scanf("%d",&num);
	
	printf("%d�Ľ׳�Ϊ%d \n",num,fac(num));
	
	return 0;
}
