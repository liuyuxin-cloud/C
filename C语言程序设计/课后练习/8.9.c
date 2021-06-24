#include <stdio.h>

int f(int m,int n){
	if(m == n || n == 0){
		return 1;
	}else{
		return(m * f(m-1,n) /(m-n));
	}
}

int main(){
	int m,n;
	int c;
	scanf("%d%d",&m,&n);
	c = f(m,n);
	printf("result is %d",c);
}
