//�ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�
#include <stdio.h>
int main (void)
{
	int num_s,num_p;
	scanf("%d %d",&num_s,&num_p);
	int max[1001];
	int i;
	for( i = 0 ; i < num_p ; i++){
		scanf("%d",&max[i]);
	}
	while( num_s ){
	num_s--;
	int sum = 0;
	for( i = 0 ; i < num_p ; i++){
		int ans;
		scanf("%d",&ans);
		if( ans ){
			sum += max[i]; 
			}
		}
		printf("%d ",sum);	
	}
	return 0;
} 
 
