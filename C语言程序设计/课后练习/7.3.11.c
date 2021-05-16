#include <stdio.h>

void main(){
	int a[10] = {1,3,5,7,9};
	int n = 5;
	int i ,j;
	scanf("%d",j);
	for(i = n-1 ; i >= 0 ; i--){
		if(a[i] > j){
			a[i+1] = a[i];
		}else{
			break;
		}
	}
	a[i+1] = j;
	for(i = 0 ; i < n-1 ; i++){
		printf("%d",a[i]);
	}
}
