//����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
#include <stdio.h>
int main (void){
	int n;
	int i,j,t,r;
	int a[100] = {0} ;
	
	scanf("%d",&n);//����ÿ����� 
	
	while(n){
		for(i = 0 ; i < n ; i++){
			scanf("%d",&a[i]);
		} 
		for(i = 0 ; i < n ; i++){   //ȡ����ֵ 
			if(a[i] < 0)
				a[i] = (-a[i]);
		}
		for (i = 0 ; i < n ; i++){  //����ֵ���� 
			for(j = 0;j < n - i;j++){
				if (a[j] < a[j + 1])
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
			}
		} 
		for (i = 0 ; i < n ; i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
