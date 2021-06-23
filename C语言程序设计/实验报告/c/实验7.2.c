#include <stdio.h>
#include <string.h>

int MaxAffixLength(char T[],int next[]){
	int i,j,len;
	int n = strlen(T);
	memset(next,0,12*sizeof(int));
	for( i = 1 ; T[i] != '\0' ; i++ ){
		for(len = i-1 ; len >= 1 ; len--){
			for(j = 0 ; j < len ; j++){
				if(T[j] != T[i-len+j+1])
					break;
			}	
			if(j == len){
				next[i] = len;
				break;
			}
		}
	}
} 
void main(){
	int i;
	char T[13] = "ababbabc";
	int next[12] = {0};
	MaxAffixLength(T,next);
	for(i = 0 ; i < 12 ; i++ ){
    	printf("%d ",next[i]);
	}
}

