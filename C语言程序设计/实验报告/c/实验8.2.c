#include <stdio.h>
#include <stdlib.h>

merge(int a[],int temp[],int left,int mid,int right){
	int l_pos = left;
	int r_pos = mid+1;
	int pos = left;
	while(l_pos <= mid && r_pos <= right){
		if(a[l_pos] < a[r_pos]){
			temp[pos++] = a[l_pos++];
		}else{
			temp[pos++] = a[r_pos++];
		}
	}
	while(l_pos <= mid){
		temp[pos++] = a[l_pos++];
	}
	while(r_pos <= right){
		temp[pos++] = a[r_pos++];
	}
	while(left <= right){//将归并的这一部分复制到元素组中
		arr[left] = temp[left];
		left++; 
	} 
}

mergeSort(int a[],int temp[],int left,int right){
	if(left < right){
		int mid = (left + right) / 2;
		mergeSort(a,temp,left,mid);
		mergeSort(a,temp,mid+1,right);
		merge(a,temp,left,mid,right);
	}
}
void showArr(int arr[],int n){//打印数组
	int i;
	for(i = 0 ; i < n ; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}

int main(){
	int a[] = {5,7,4,1,6,9,8,2,3};
	int n = 9;
	int *temp = (int*)malloc(sizeof(int));
	showArr(a,n);
	if(temp){
		mergeSort(a,temp,0,n-1);
	}else{
		printf("ERROR!");
	}
	showArr(a,n);
}
