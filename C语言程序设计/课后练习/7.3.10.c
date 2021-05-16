#include <stdio.h>
void main(){
	char s1[100] = "123cv";
	char s2[10] = "12xhyn";
	int i,j;
	
	for(i = 0 ; s1[i] != '\0' ; i++);
	for(j = 0 ; s2[j] != '\0'; j++){
		s1[i+j] = s2[j];
	}
	s1[i+j] = '\0';
	printf("%s",s1);
}
