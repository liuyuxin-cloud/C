//����n�������������������������ĳ˻���
#include <stdio.h>
int main (void)
{
	int n,a[n];
	int i;
	int m = 1;
	
	printf("���������ĸ����ǣ�");
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int)*n);
	
	printf("�����ֱ��ǣ�");
	for( i = 0 ; i < n ; i++){
		scanf("%d ",&a[i]);
	}
	
	for( i = 0 ; i < n ; i++){
		if( a[i] % 2 == 1)
			m *= a[i]; 
	}
	
	printf("���������Ļ���%d",m);
	
	return 0;
}
