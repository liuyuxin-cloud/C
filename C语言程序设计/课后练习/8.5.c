#include <stdio.h>
#include <string.h>
#define N 30

void Josegh(int p[],int n,int s,int m)
{
	int i,j,s1,w;
	s1 = s;
	for(i = 0 ; i <= n ; i++){
		p[i-1] = i;
	}
	for(i = n ; i >= 2 ; i--){
		s1 = (s1 + m - 1) % i;
		if(s1 == 0){
			s1 = i;
		}
		w = p[s1-i];
		for(j = s1 ; j < i ; j++){
			p[j-1] = p[j];
		}
		p[i-1] = w;
	}
}
int main(){
	int i,p[N];
	Josegh(p,N,1,10);
	for(i = N-1 ; i >= 0 ; i--){
		printf("%4d",p[i]);
		if(i % 10 == 0){
			printf("\n");
		}
	}
}
