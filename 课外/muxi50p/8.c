/*青年歌手大奖赛中，评委会给参赛选手打分。
选手得分规则为去掉一个最高分和一个最低分，
然后计算平均得分，请编程输出某选手的得分。*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n,a[n];
	int i,j;
	int t = 0;
	int sum = 0;
	double ave = 0.0;
	
	
	printf("裁判打分的个数是：");
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int)*n);
	
	printf("分数分别是：");
	for( i = 0 ; i < n ; i++){
		scanf("%d ",&a[i]);
	}
	
	for (i = 0;i < n;i++){    //分数排序 
		for(j = 0;j < n - i;j++){
			if (a[j] > a[j + 1])
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
    }
    for(i = 1;i < n - 1;i++){  //除去第一个和最后一个 
    	sum += a[i];
	}
	ave = sum  / (n - 2);
	printf("该选手得分是：%d",ave);
	return 0;
}
