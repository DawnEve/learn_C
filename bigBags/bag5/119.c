/*
* 摘    要： n皇后问题
* 使用追溯法，扩展到n皇后。
* 使用真二维数组（基于二次指针），因为是方阵，row和col是一样大小的。
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h> //for memset();
//#define LEN 8

//不使用全局变量，解决N皇后问题
int counter=0; //统计方案总数的，可有可无变量


// 开辟二维数组，并初始化为0
int **get2DArr(int row, int col){
	//dim1: pointer array of rows
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

//print 2d arr
void print2DArr(int **arr, int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


// 检查[row][col]位置放棋子是否合适，检查4个方向：行、列、两个45度角
// 只需要检测当前行已经填充的部分: 上，左，右上，左上。
// len 表示最大棋盘，当前坐标是 [row][col]
int isValid(int len, int **arr, int row, int col){
    //1.递归保证了行合法: 每行有且只有一个棋子
    //2.当前列（上方）是否有棋子
	for(int i=0; i<row; i++){
		if(arr[i][col]!=0)
			return 0;
	}
	//3.判断主对角线(左上)是否有棋子
	for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
		if(arr[i][j] != 0)
			return 0;
	}
	//4.判断副对角线(右上)是否有棋子
	for(int i=row-1, j=col+1; i>=0 && j<len; i--, j++){
		if(arr[i][j] != 0)
			return 0;
	}
	return 1;
}

/* 深度优先搜索
i 是当前行号；
len 总行数，相当于终止条件: i==len
arr 二维数组名
*/
void DFS(int i, int len, int **arr) { //第i行
	// 进入本函数时，在n×n棋盘前i-1行已放置了互不攻击的i-1个棋子
	// 现从第i行起继续为后续棋子选择合适位置
	// 1.当i==n时，求得一个合法的布局，输出之
	if (i==len) {
        print2DArr(arr, len, len); //输出棋盘的当前布局； //n为4时，即4皇后问题
        counter++;
	} else {
		for (int j=0; j<len; j++) { //第j列
			// 2.在第i行第j列放置一个棋子，棋子编号是从1开始的
            arr[i][j] = i+1;
            // 3.检查是否合法
			if (isValid(len, arr, i, j)){
				DFS(i+1, len, arr); //如果合法，则探测下一行
            }
			// 4.移走第i行第j列的棋子
            arr[i][j] = 0;
		}
	}
}


int main(){
    // 1.输入 N 皇后
    int len;
    printf("Input an int [4, 20] >>> ");
    scanf("%d", &len);

    // 2. 创建数组，保存棋盘状态: 0没有棋子，正整数表示第n个棋子
	//该区域每个字节都初始化为0
    int **chessStatus=get2DArr(len, len);

    // 3. 开始递归
    DFS(0, len, chessStatus);

    // 4. 释放内存空间 
    free2DArr(chessStatus, len);
	
    printf("Total solution:%d\n", counter);
    return 0;
}
