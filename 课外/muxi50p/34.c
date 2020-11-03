/*划拳是酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。
如果谁比划出的数字正好等于两人喊出的数字之和，谁就赢了，输家罚一杯酒。
两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。
下面给出甲、乙两人的划拳记录，请你统计他们最后分别喝了多少杯酒。*/
#include <stdio.h>
int main (void)
{
	int n;
	int i = 0;
	int j = 0;
	scanf("%d",&n);
	while(n){
		n--;
		int w,x,y,z;
		scanf("%d%d%d%d",&w,&x,&y,&z);
		if( w + y == x ){
			j++;
			continue;
		}
		
		else if( w + y == z ){
			i++;
		}
	
	}
	printf("%d %d",i,j);
	return 0;
}
