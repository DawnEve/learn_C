/*
* 摘    要： 四皇后问题
所谓4皇后问题就是求解如何在4×4的棋盘上无冲突的摆放4个皇后棋子。在国际象棋中，皇后的移动方式为横竖交叉的，因此在任意一个皇后所在位置的水平、竖直、以及45度斜线上都不能出现皇后的棋子。
https://blog.csdn.net/lxy994/article/details/124714990
https://blog.csdn.net/Prototype___/article/details/124764342

暴力破解法:
记录行列，怎么判断45度?
*/
#include <stdio.h>
//const int NUM=4;
#define NUM 4


//打印结果
void my_print(int (*p)[4]){
	int i, j;
	for (i=0; i<NUM; i++)	{
		for (j=0; j<NUM; j++)	{
			if (*(*(p+i)+j) != 0) {   // *(*(p+i)+j)终于用到了这种形式！
				printf("%d  ", *(*(p+i)+j));
			} else
				printf("_  ");
		}
		printf("\n");
	}
}


//放在x行y列是否危险: 危险返回1，不能放。
//x是行下标，y是列下标
int isDanger(int x, int y, int (*pArr)[4]){
	int a=x, b=y;
	//1.主对角线有皇后，则返回1
	while( ++x < NUM ){
		if( ++y < NUM ){
			if( pArr[x][y] ==1)
				return 1;
		}
	}
	x=a; y=b;
	while( --x >= 0 ){
		if( --y >= 0 ){
			if( pArr[x][y] ==1)
				return -1;
		}
	}
	//2.副对角线有皇后，则返回1
	x=a; y=b;
	while( ++x < NUM ){
		if( --y >= 0 ){
			if( pArr[x][y] ==1)
				return 2;
		}
	}
	x=a; y=b;
	while( --x >= 0 ){
		if( ++y < NUM ){
			if( pArr[x][y] ==1)
				return -2;
		}
	}

	//3.一行是否有元素
	for(int i=0; i!=a && i<NUM; i++){
		if(pArr[i][b]==1)
			return 3;
	}
	//4.一列是否有元素
	for(int i=0; i!=b && i<NUM; i++){
		if(pArr[a][i]==1)
			return 4;
	}
	//(横、竖、两个斜45度)4个方向上都没皇后，则返回0
	return 0;
}

//打印数组 
void printArr(int (*pArr)[NUM], int len){
	for(int i=0; i<len; i++){
		for(int j=0; j<NUM; j++){
			printf("%5d ", pArr[i][j]);
		}
		printf("\n");
	}
}



//测试1: 给定数组，打印其危险点(1危险，0不危险)
void test1(){
	int arr[NUM][NUM]={
		{-5,2,3,4},
		{10,1,30,40},
		{100,200,300,400},
		{-1,-2,-3,-4}
	};
	//打印数组
	printArr(arr, sizeof(arr)/sizeof(arr[0]));

	
	//打印危险点
	printf("\nDanger reasons: \n");
	for(int i=0; i<NUM; i++){
		for(int j=0; j<NUM; j++){
			if(isDanger(i, j, arr)){
				printf("%3d", 1);
			}else{
				printf("%3d", 0);
			}
		}
		printf("\n");
	}
}

//就是依次放4个值，放之前检测，该点不危险(返回0)才能放。
//如果4个值都放入了，则返回成功1，有一个不能放入则返回0
int isValid(int row[], int col[]){
	//初始矩阵
	int arr[NUM][NUM]={0};
	//逐个放入
	for(int i=0; i<NUM; i++){
		int x=row[i], y=col[i];
		if(isDanger(x, y, arr)==0){
			arr[x][y]=1;
		}else{
			return 0;
		}
	}
	//printArr(arr, 4);
	my_print(arr);
	return 1;
}


//测试2: 给定矩阵，判断给定方法是否成立?
void test2_a(){
	int row[]={0,1,2,3};
	int col[]={0,3,1,2};
	
	if(isValid(row, col)){
		printf("This position is Valid!\n");
	}else{
		printf("Not\n");
	}
}


// 给出答案
void test2(){
	int row[]={0, 1,2,3};
	int col[]={1,4,2,3};
	// 生成列矩阵 [1,2,3,4]的随机排序
	int counter=0, valCounter=0;
	for(int x1=0; x1<NUM; x1++){
		for(int x2=0; x2<NUM; x2++){
			if(x1==x2) continue;
			for(int x3=0; x3<NUM; x3++){
				if(x3==x1 || x3==x2) continue;
				for(int x4=0; x4<NUM; x4++){
					if(x4==x1 || x4==x2 || x4==x3) continue;
					// 
					counter++;
					printf(">> Method %d: \n", counter);
					col[0]=x1;
					col[1]=x2;
					col[2]=x3;
					col[3]=x4;
					//判断
					if(isValid(row, col)){
						valCounter++;
						printf("===>Valid method %d: ", valCounter);
						//打印结果 
						printf("[%d %d %d %d]\n", x1, x2, x3, x4);
					}else{
						printf("Not valid\n");
					}
				}
			}
		}
	}
}


void main() {
	//test1();
	test2();
}
