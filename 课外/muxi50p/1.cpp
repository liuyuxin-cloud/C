/*�������ſεĳɼ���������ųɼ�����60�����ϡ��������it is pass.��
ֻҪ��һ�ŵ���60�־������it is not pass.��
���������κ�һ�ųɼ�����0-100��Χ���������it is error.����*/
#include <stdio.h>
int main (void)
{
	int x,y,z;
	printf("���������ųɼ���"); 
	scanf("%d%d",&x,&y);
	
	while(x < 0 || x > 100 || y < 0 || y > 100 ){
		printf("it is error");
		printf("���������ųɼ���"); 
		scanf("%d%d",&x,&y);
	}
	if(x > 60 && y > 60)
		z = 0;
	else
		z = 1;
		
	switch(z){
		case 0:  printf("it is pass");    break;
		case 1:  printf("it is not pass");break;
	}
	return 0;
}
