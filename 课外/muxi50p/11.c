//浙江桐乡乌镇共有n个人,请找出该镇上的前m个大富翁.
#include <stdio.h>
int main (void)
{
	int a[100000] = {0};
	int i,j;
	int n,m;
	int t = 0;
	
	printf("请输入总人数和所寻找的富翁人数：\n");
	scanf("%d %d",&n,&m);
	printf("请输入所有人的财富值：\n");
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0 ; i < n ; i++){
		for(j = 0;j < n - i;j++){
			if (a[j] < a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("富翁的财富值分别为：");
	for(i = 0 ; i < m ; i++){
		printf("%d",a[i]);
	}
	return 0;
}
