#include <stdio.h>

void InsertSort1(int a[],int n){
	int temp,sorted;
	int i,j;
	for(i = 1 ; i < n ; i++){
		sorted = i-1;
		temp = a[i];
		while(sorted > 0 && temp < a[sorted]){
			a[sorted+1] = a[sorted];
			sorted--;
		}
		a[sorted+1] = temp;
	}
}

void InsertSort(int *p,int n){
	
	int temp;
	int sorted;
	int i,j;
	int *s = p,*e = p+n-1;
	
	for( ; s < e ; s++){
		sorted = s-p-1;
		temp = *s;
		while(sorted >= 0 && *(p+sorted) > temp){
			*(p+sorted+1) = *(p+sorted);
			sorted--;
		}
		*(p+sorted+1) = temp;
	}
} 

int main(){
	int a[5] = {6,2,5,7,3};
	InsertSort1(a,5);
}
