#include <stdio.h>
void main(){
	char s1[100],s2[100] = "abscde\0sjdf"
	int	i = 0;
	while(1){
		s1[i] = s2[i];
		if(s2[i] == '\0'){
			break;
		}
		i++;
	}
	printf("%s",s1);
}
