//������A�Ƿ��ܱ�������B��������֪��Ϊʲôxhd���о�������⣬��������ɡ�
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
