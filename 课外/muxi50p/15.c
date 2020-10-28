//Since all we know the ASCII code, your job is simple: input numbers and output corresponding messages.
#include <stdio.h>

int main (void)
{
	int a[1001] = {0};
	int t,i;
	scanf("%d",&t);
	
	for(i = 0 ; i < t ; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i < t ; i++){
		printf("%c",(char)a[i]);
	}
	return 0;
}
