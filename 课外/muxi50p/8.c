/*������ִ����У���ί�������ѡ�ִ�֡�
ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�
Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n,a[n];
	int i,j;
	int t = 0;
	int sum = 0;
	double ave = 0.0;
	
	
	printf("���д�ֵĸ����ǣ�");
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int)*n);
	
	printf("�����ֱ��ǣ�");
	for( i = 0 ; i < n ; i++){
		scanf("%d ",&a[i]);
	}
	
	for (i = 0;i < n;i++){    //�������� 
		for(j = 0;j < n - i;j++){
			if (a[j] > a[j + 1])
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
    }
    for(i = 1;i < n - 1;i++){  //��ȥ��һ�������һ�� 
    	sum += a[i];
	}
	ave = sum  / (n - 2);
	printf("��ѡ�ֵ÷��ǣ�%d",ave);
	return 0;
}
