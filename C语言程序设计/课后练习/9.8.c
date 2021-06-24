#include <stdio.h>
#include <string.h>
#include <math.h>

char *week_str[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"}; 

int GetWeek(char *str){
	int k,i=0;
	while(str[i] != 0){
		if(str[i] < '0' || str[i] >'9')	return -1;
		else i++;
	}
	k = atoi(str);
	if(k<0 || k>6)	return -1;
	
	return k;
}

int main(int argc,char *argv[]){
	int k;
	if(argc != 2){
		printf("ERROR");
		exit(0);
	}
	k = GetWeek(argv[1]);
	if(k == -1){
		printf("ERROR");
		exit(0); 
	}
	printf("%s",week_str[k]);
}


