//����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����
//������ʽ�������һ�������� 3 λ����������
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
