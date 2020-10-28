//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
#include <stdio.h>
int main (void){
	int n;
	int i,j,t,r;
	int a[100] = {0} ;
	
	scanf("%d",&n);//输入每组个数 
	
	while(n){
		for(i = 0 ; i < n ; i++){
			scanf("%d",&a[i]);
		} 
		for(i = 0 ; i < n ; i++){   //取绝对值 
			if(a[i] < 0)
				a[i] = (-a[i]);
		}
		for (i = 0 ; i < n ; i++){  //绝对值排序 
			for(j = 0;j < n - i;j++){
				if (a[j] < a[j + 1])
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
			}
		} 
		for (i = 0 ; i < n ; i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
