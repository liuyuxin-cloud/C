#include <stdio.h>

void exp(){
	int x;
	scanf("%d",&x);
	
	printf("��λ��%d\n",x%10);
	x /= 10;
	printf("ʮλ��%d\n",x%10);
	printf("��λ��%d\n",x/10);
	
}
int main(){
	exp();
}

