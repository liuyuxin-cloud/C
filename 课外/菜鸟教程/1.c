//��1��2��3��4,4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include <stdio.h>

int main(void)
{
	int x;
	int i,j,k;
	for(i = 1;i < 5;i++){
		for (j = 1;j < 5;j++){
			for(k = 1;k < 5;k++){
				if((i != j) && (j != k) && (i != k)){
					x = k + 10 * j + 100 * i;
					printf("%4d",x);
				}
			}
				
		}
	}
	return 0;
}
