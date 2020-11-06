//判断题的评判很简单，本题就要求你写个简单的程序帮助老师判题并统计学生们判断题的得分。
#include <stdio.h>
int main (void)
{
	int num_s,num_p;
	scanf("%d %d",&num_s,&num_p);
	int max[1001];
	int i;
	for( i = 0 ; i < num_p ; i++){
		scanf("%d",&max[i]);
	}
	while( num_s ){
	num_s--;
	int sum = 0;
	for( i = 0 ; i < num_p ; i++){
		int ans;
		scanf("%d",&ans);
		if( ans ){
			sum += max[i]; 
			}
		}
		printf("%d ",sum);	
	}
	return 0;
} 
 
