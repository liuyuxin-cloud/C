#include <stdio.h>

int main(){

	int a ;
	scanf("%d",&a);
	
	if(a > 0){
		printf("���������Ϊ����\n");
	} else if(a == 0){
		printf("���������Ϊ0\n");
	}else{
		printf("���������Ϊ����\n");
	}
	
	if(a % 2){
		printf("���������������\n");
	}else{
		printf("�����������ż��\n"); 
	}
	
}
