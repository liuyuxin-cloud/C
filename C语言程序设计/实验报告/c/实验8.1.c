#include <stdio.h>
#include <string.h>

void PMT(char T[],int next[]){
	int i,j;
	memset(next,0,sizeof(int)*80); 
	next[0] = 0;
	if(T[0] == T[1]){
		next[1] = 1;
	}else{
		next[1] = 0;
	}
	for(i = 2 ; T[i] != '\0' ; i++){
		j = i;
		while(j){
			if(T[i] == T[next[j-1]]){
				next[i] = next[j-1] + 1;
				break;
			}else{
				j = next[j-1];
			}
		}
	}
	for(i = i-1 ; i > 0 ; i--){
		next[i] = next[i-1];  
	}
} 

int KMP(char S[],char T[],int next[]){
	int i,j = 0;
	for(i = 0 ; S[i] != '\0' ; i++){
		while(j > 0 && S[i] != T[j]){
			j = next[j];
		}
		if(S[i] == T[j]){
			j++;
		}
		if(j == strlen(T)){
			return i- strlen(T) + 1;
		}
	}
	return -1;
}



int main(){
	char S[19] = "ababcaababbabccbab";
	char T[9] = "ababbabc";
	int next[80] = {0};
	PMT(T,next);
	int a = KMP(S,T,next);
	printf("%d",a);
}










