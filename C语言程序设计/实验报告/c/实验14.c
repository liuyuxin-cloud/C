#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

int isPrime(int n) //判断是否为素数
{
	int i,k;
	k = (int)sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int canplace(int *p,int i,int j,int n){
	int k,flag;
	for(k = 0 ; k < i ; k++){
		if(p[k] == j)
			return 0;
	}
	flag = isPrime(j+p[i-1]);
	if(flag == 1 && i == n){
		flag == isPrime(j+p[0]);
	}
	return flag;
}

void showResult(int *p,int n){
	int i = 0;
	static num = 0;
	printf("第%d个解=====\n",++num);
	for(; i < n ; i++){
		printf("%d  ",p[i]);
	}
	putchar('\n');
}

void primeCycle(int n){
	int i = 1,j,k;
	int *p = (int*)malloc(sizeof(int)*n);
	memset(p,0,sizeof(int)*n);
	p[0] = 1;
	while(i >= 1){
		for(j = p[i]+1 ; j <= n ; j++){
			if(canplace(p,i,j,n)){
				p[i] = j;
				break;
			}
		}
		if(j > n){
			p[i--] = 0;
		}
		else if(i == n-1){
			showResult(p,n);
			p[i--] = 0;
		}
		else
			i++;
	}
	free(p);
	printf("finished!\n");
}

int main(){
	int n;
	printf("Input an integer:");
	scanf("%d",&n);
	primeCycle(n);
}
