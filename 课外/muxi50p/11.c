//�㽭ͩ��������n����,���ҳ������ϵ�ǰm������.
#include <stdio.h>
int main (void)
{
	int a[100000] = {0};
	int i,j;
	int n,m;
	int t = 0;
	
	printf("����������������Ѱ�ҵĸ���������\n");
	scanf("%d %d",&n,&m);
	printf("�����������˵ĲƸ�ֵ��\n");
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0 ; i < n ; i++){
		for(j = 0;j < n - i;j++){
			if (a[j] < a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("���̵ĲƸ�ֵ�ֱ�Ϊ��");
	for(i = 0 ; i < m ; i++){
		printf("%d",a[i]);
	}
	return 0;
}
