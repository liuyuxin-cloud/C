/*���� N ���� 0 �ĸ�λ���֣����������� 2 �����ֶ�������ϳ� 1 �� 2 λ�����֡�
Ҫ�����п�����ϳ����� 2 λ���ֵĺ͡�*/
#include <stdio.h>

int fun(int a[],int n)
{
	if(n >= 0){
		return a[n - 1] + fun(a,n - 1);
	}
}
int main (void)
{
	int n;
	int i,j;
	int sum = 0;
	scanf("%d",&n);
	int a[11];
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	sum = fun(a,n);
	printf("%d",sum);
	return 0;
 } 


