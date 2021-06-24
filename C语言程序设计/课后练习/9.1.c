#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int i,n;
	scanf("%d",&n);
	int *a,*b;
	a = (int*)malloc(sizeof(int)*n);
	b = (int*)malloc(sizeof(int)*n);
	memset(a,0,sizeof(int)*n);
	memset(b,0,sizeof(int)*n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i < n ; i++){
		scanf("%d",&b[i]);
	}
	for(i = 0 ; i < n ; i++){
		swap(&a[i],&b[i]);
	}
	for(i = 0 ; i < n ; i++){
		printf("%d ",a[i]);
	}
	putchar('\n');
	for(i = 0 ; i < n ; i++){
		printf("%d ",b[i]);
	}
}
