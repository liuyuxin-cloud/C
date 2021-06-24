#include <stdio.h>
#include <string.h>

int StrLoc(char str1[],char str2[]){
	int i,len1,len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	if(len1 > len2)	return -1;
	for(i = 0 ; i <= len2-len1 ; i++){
		if(strncmp(str1,str2+i,len1) == 0){
			return i+1;
		}
	}
	return -1;
}

int main(){
	int index;
	char str1[] = "do";
	char str2[] = "How do you do?";
	index = StrLoc(str1,str2);
	if(index == -1){
		printf("不在");
	}else{
		printf("最开始出现的位置是%d",index);
	}
}
