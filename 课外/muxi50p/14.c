//����n(n<100)�������ҳ�������С��������������ǰ����������������Щ����
#include <stdio.h>
int main (void)
{
	int m,n ;
	int i,j;
	int a[j];
	int x,tmp;
	
	printf("������������������ݸ�����");
	scanf("%d %d",&m,&n);
	for(i = 0 ; i < m ; i++){
		printf("�������������ݣ�\n"); 
		for(j = 0 ; j < n ; j++){
			scanf("%d",&a[j]);
		}
		x = ( a[0] < a[1] ) ? 0 : 1 ;
		
		for(j = 2 ; j < n; j++){
			x = ( a[x] < a[j] ) ? x : j ;
		}
		tmp = a[0];
		a[0] = a[x];
		a[x] = tmp;
		
		for(j = 0 ; j < n ; j++){
			printf("%d ",a[j]);
		}
		putchar('\n');
	}
	return 0;
}
