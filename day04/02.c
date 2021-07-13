#include<stdio.h>

//第二维一定要写
void printArr(int arr[][3], int nR, int nC){
	printf("%p\n", arr);
	for(int i=0; i<nR; i++){
		for(int j=0; j<nC; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int a[5][3]={ {80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85} }; 
	int b[5][3]={ 80,75,92,61,65,71,59,63,70,85,87,90,76,77,85 };
	printArr(a, 5, 3);
	printf("\n");
	printArr(b, 5, 3);
	return 0;
}