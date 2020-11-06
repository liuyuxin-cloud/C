//检查是否是回文字符串 
#include <stdio.h>
#include <string.h>

char str[1000];
int solve(char * s){
	int len = strlen(s);
	int i = 0 ;
	int j = len - 1;
	while( i < j ){
		if(s[i] != s[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
int main (void){
	int n;
	scanf("%d",&n);
	while( n ){
	n--;
	while(scanf("%s",str) != EOF)
	{
		if(solve(str))
			printf("yes\n");
		else
			printf("no\n");
		}
	}
	return 0;
}
