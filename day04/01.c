#include<stdio.h>
int main(){
	int arr[]={20, 1, 2, 90, 16, -8, 6, 0,8,10};
	
	for(int i=0; i<10; i++){
		for(int j=0; j<9; j++){
			if(arr[j] > arr[j+1] ){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}