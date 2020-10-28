/*卡拉兹(Callatz)猜想：
对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
如果它是奇数，那么把 (3n+1) 砍掉一半。
这样一直反复砍下去，最后一定在某一步得到 n=1。
对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1？*/
#include <stdio.h>
int main (void)
{
	int x;
	int t = 0;
	
	printf("请输入一个正整数：");
	scanf("%d",&x);
	
	while(x != 1){
		if(x % 2 == 0){
			x /= 2;
			t++;
		}
		else{
			x = (3 * x + 1) / 2;
			t++;
		}
	}
	printf("共需%d步",t);
	return 0;
 } 
