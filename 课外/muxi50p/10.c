/*����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ�
��ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ���
��������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������*/
#include <stdio.h>
int main (void)
{
	int a[50][5] = {0};
	int n,m ;	
	int i,j ;
	int sum  = 0 ;//���ܷ� 
	double pa[50] = {0} ;
	double sa[5] = {0} ;//�ֱ�Ϊ��ѧ��ƽ���ɼ���ÿ�ſ�ƽ���ɼ� 
	
	printf("������ѧ�������Ϳ��Կ�Ŀ����");
	scanf("%d %d",&n,&m);
	
	printf("�����������ѧ���ɼ���");
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//��ÿ��ѧ����ƽ���ɼ�
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			sum += a[i][j];
		}
		pa[i] = sum / m ;
		printf("��%d��ѧ����ƽ���ɼ���%.2f\n",i + 1,pa[i]);
		sum = 0; 
	} 
	for(j = 0 ; j < m ; j++){ 
		for(i = 0 ; i < n ; i++){
		
			sum += a[i][j];
		}
		sa[j] = sum / n ;
		sum = 0;
		printf("��%d��ѧ�Ƶ�ƽ���ɼ���%.2f\n",j + 1,sa[j]);
	} 
	return 0;
}

