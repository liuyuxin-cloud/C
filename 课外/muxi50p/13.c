//�������� [2^-31,2^31] �ڵ� 3 ������ A��B �� C�����ж� A+B �Ƿ���� C��
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
	
	printf("���������������\n");
	scanf("%d",&n);
	
	for( i = 0 ; i < n ; i++){
		printf("�������%d�����ݣ�\n",i + 1);
		for( j = 0 ; j < 3 ; j++){
			scanf("%d",&a[j]);
		}
		x = max(a[0],a[1],a[2]);
		printf("Case #%d��%s\n",i + 1 ,((x == 1) ? str2 : str1 )); 
	}
	return 0;
}

