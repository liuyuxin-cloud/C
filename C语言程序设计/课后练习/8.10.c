#include <stdio.h>
#include <string.h>

char str[80] = {0};

void IntToStr(int n){
	int i;
	if(n==0) return;
	for(i = strlen(str)-1 ; i >= 0 ; i--){
		str[i+1] = str[i];
	}
	str[0] = n%10 + '0';
	IntToStr(n / 10);
}

int main(){
	int num;
	scanf("%d",&num);
	IntToStr(num);
	printf("The string is %s\n",str);
}
