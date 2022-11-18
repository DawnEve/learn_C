/*
* 使用真二维数组，二次指针。因为是方阵，row和col是一样大小的。
*/
#include<stdio.h>
#include<stdlib.h>
//#include<string.h> //for memset();
#define LEN 8


// 开辟二维数组，并初始化为0
int ** get2DArr(int row, int col){
	//dim1: pointer array of row
	int **arr2d=(int **)malloc(sizeof( int*) *row );
	//dim2: point to each column
	for(int i=0; i<row; i++){
		arr2d[i] = (int*)malloc(sizeof(int) * col);
		//memset(arr2d[i], 0, sizeof(int)*col);
	}
	//init with 0
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			arr2d[i][j]=0;
	}
	
	return arr2d;	
}

//destroy the 2d arr
void free2DArr(int **arr, int row){
	for(int i=0; i<row; i++)
		free(arr[i]);
	free(arr);
}

//print 2d
void print2DArr(int **arr, int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//测试二维数组
void demo1(){
	int row=LEN, col=LEN;
	int **arr=get2DArr(row, col);
	/*int k=1;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			arr[i][j]=k++;
		}
	}*/
	print2DArr(arr, row, col);
	free2DArr(arr, row);
}


int main(){
	demo1();
}
