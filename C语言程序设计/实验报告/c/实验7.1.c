#include <stdio.h>
#include <string.h>

int BF(char S[],char T[]){
	int n1 = strlen(S);
	int n2 = strlen(T);
	int i,j,k,m;
	for(i = 0 ; i <= n1-n2 ; i++){
		j = i;
		m = 0;
		while(j < i+n2){
			if(S[j++] != T[m++])
				break;
		} 
		if(j == i+n2)
			return i+1;
	}
	return -1;
}

int main(){
	char S[] = "ababcaababbabccbab";
	char T[] = "ababbabc";
	int x = BF(S,T);
	printf("%d",x);
}
