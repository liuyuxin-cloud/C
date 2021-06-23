#include <stdio.h>

void exp(){
	int x;
	scanf("%d",&x);
	
	printf("个位：%d\n",x%10);
	x /= 10;
	printf("十位：%d\n",x%10);
	printf("百位：%d\n",x/10);
	
}
int main(){
	exp();
}

