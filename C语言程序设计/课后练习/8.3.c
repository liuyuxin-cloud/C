#include <stdio.h>
#include <stdlib.h>

void GetData(int a[],int n){
	int i;
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
}

void Sort(int a[],int n){
	int i,j,temp;
	for(i = 0 ; i < n ; i++){
		temp = 0;
		for(j = 0 ; j < n-i ; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(){
	int a[10];
	int i;
	int n = 10;
	GetData(a,n);
	Sort(a,n);
	for(i = 0 ; i < n ; i++){
		printf("%d ",a[i]);
	}
}
