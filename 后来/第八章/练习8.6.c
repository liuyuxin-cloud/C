//����׳�
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
	printf("������һ��������");
	scanf("%d",&num);
	
	printf("%d�Ľ׳�Ϊ%d \n",num,fac(num));
	
	return 0;
}
