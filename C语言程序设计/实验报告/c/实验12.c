#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char *getstr(){
	int num,i;
	char *str;
	printf("Please input an integer:");
	scanf("%d",&num);
	str = (char*)malloc(sizeof(char)*(num+1));
	for(i = 0 ; i < num ; i++){
		str[i] = getche();
	}
	str[i] = '\0';
	return str;
} 

int isDigit(char c){
	if(c > '0' && c < '9')	return 1;
	else	return 0;
}

char **saveDigits(char *str){
	int count = 0;
	int i,j,k = 0,flag = 0;
	char **words;
	for(i = 0 ; str[i] != '\0' ; i++){
		if(!isDigit(str[i])){
			flag = 0;
		}
		else if(flag == 0){
			count++;
			flag = 1;
		}
	}

	words = (char**)malloc(sizeof(char*)*count);
	for(i = 0 ; *(str+i) != '\0' ; i++){
		if(isDigit(*(str+i)) == 0)	continue;
		for(j = i ; isDigit(*(str+j)) == 1 ; j++);
		words[k] = (char*)malloc(sizeof(char)*(j-i+1));
		strncpy(words[k],str+i,j-1);
		words[k][j-i] = '\0';
		k++;
		i = j-1;	
	}
	return words;
}

void deletewords(char **words){
	int i;
	for(i = 0 ; words[i] != 0 ; i++){
		free(words[i]);
	}
	free(words);
}

int main(){
	char *str;
	char **words;
	int i;
	str = getstr();
	words = saveDigits(str);
	purchar('\n');
	for(i = 0 ; words[i] != 0 ;i++){
		puts(words[i]);
	}
	deletewords(words);
}
