/*
* 摘    要： 四皇后问题
所谓4皇后问题就是求解如何在4×4的棋盘上无冲突的摆放4个皇后棋子。在国际象棋中，皇后的移动方式为横竖交叉的，因此在任意一个皇后所在位置的水平、竖直、以及45度斜线上都不能出现皇后的棋子。
https://blog.csdn.net/lxy994/article/details/124714990
*/

#include <stdio.h>

void my_print(int (*p)[4]){
	int i, j;
	for (i=0; i<4; i++)	{
		for (j=0; j<4; j++)	{
			if (*(*(p+i)+j) != 0)   //*(*(p+i)+j)终于用到了这种形式！！！！
			{
				printf("%d   ", *(*(p+i)+j));
			}
			else
				printf("_   ");
		}
		printf("\n");
	}
}

void main() {
	int i, j, k = 1, a[4][4] = {0}, col[4] = {-1, -1, -1, -1}, row[4] = {-1, -1, -1, -1},  n = 1, lefttop = 0, righttop = 0;
	//输出初始值
	my_print(a);
	printf("\n");


	//赋值，皇后为1
	for (i=0; i<4; i++)
	{
	//	if ((i == row[0]) || (i == row[1]) || (i == row[2]) || (i == row[3])) continue; 
	
		for (j=0; j<4; j++)
		{
	//		if ((j == col[0]) || (j == col[1]) || (j == col[2]) || (j == col[3])) continue; 
			if ((row[i] == -1) && (col[j] == -1)) 
			{

				if ((i == j)  && (lefttop == 1)) continue;
				if ((i == (3-j))  && (righttop == 1)) continue;
				
				a[i][j] = 1;
				k++;

				row[i] = 1;
				col[j] = 1;
				if (i == j) lefttop = 1;
				if (i == (3-j)) righttop = 1;

				
				if (0 == k%4)
				{
					printf("\n第%d种解：\n", n++);
					my_print(a);
					printf("\n\n");
				}


			}
		}
	}

	//输出最终值
	my_print(a);
}
