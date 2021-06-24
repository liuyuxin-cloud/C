#include <stdio.h>

int MaxFactor(int a,int b){
	if(a<=0 || b<=0){
		return -1;
	}
	while(a != b){
		if(a > b){
			a = a-b;
		}else{
			if(b>a){
				b = b-a;
			}
		}
	}
	return a;
} 

int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c = MaxFactor(a,b);
	(c == -1) ? printf("请正确输入") : printf("最大公因数是%d",c); 
}
