//正整数A是否能被正整数B整除，不知道为什么xhd会研究这个问题，来帮帮他吧。
#include <stdio.h>
int main (void)
{
	int n;
	int x,y;
	scanf("%d",&n);
	
	while(n){
		n--;
		scanf("%d %d",&x,&y);
		if( x % y )
			printf("NO");
		else
			printf("YES");
		}
	return 0;
}
