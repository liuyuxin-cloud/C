#include <stdio.h>

void bubble_sort(int a[],int n){
	int i,j,k;  
    int flag; 
	flag = n-1; 
	int temp = 0; 
    for(i = 0 ; i < n-1 ; i++){ //�ȴ�С���������¼��󽻻���λ�� 
    	k = flag;
    	for(j = 0 ; j < k ; j++){
    		if(a[j] > a[j+1]){
    			temp = a[j];
    			a[j] = a[j+1];
    			a[j+1] = temp;
    			flag = j;
			}
		}
	}
	for(i = 0 ; i < n-1 ; i++){//��ż���ú� 
		for(j = 0 ; j < n-i ; j++){
			if(a[j]%2 == 0 && a[j+1]%2 == 1){
				temp = a[j];
    			a[j] = a[j+1];
    			a[j+1] = temp;
			}
		}
	}
	for(i = 0 ; i < n ; i++){
		printf("%d	",a[i]);
	}
} 

int main(){
	int arr[] = {2,4,5,8,1,3,9,7,2,5,12,45,32};
	int n = 13;
	bubble_sort(arr,n);
}
