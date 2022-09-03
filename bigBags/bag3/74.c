/*
* 摘    要：识别矩阵鞍点，函数实现(鞍点：此元素是这一行的最大值，同时是这一列的最小值)
*/

#include <stdio.h>
#define M 11
#define N 11

void HaveAndian(int b[][11], int m, int n); // 二维数组，要定义除最高维外地所有维度

int main()
{
	int arr[M][N],i,j;//此处  定义的数组的第一维  要和 后面的 函数中参数数组的第一维  一致
	int m,n;

	//输入矩阵的行与列
	printf("请输入矩阵的行数m:(0~10)");
	scanf("%d",&m);

	printf("请输入矩阵的列数n:(0~10)");
	scanf("%d",&n);

	//输入矩阵
	for (i=0; i<m; i++)	{
		printf("请输入第%d行",i);
		for (j=0; j<n; j++)	{
			scanf("%d",&arr[i][j]);
		}
	}

	//输出矩阵
	printf("\t在主函数中输出矩阵\n");
	for (i=0; i<m; i++)	{
		for (j=0; j<n; j++)	{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	//调用函数判断是否有鞍点，并输出结果
	HaveAndian (arr, m, n);  
	/*经验：传递数组，最好就用数组名，否则连着行列参数容易出错   */
	return 0;
}


/*
new function
* 函数原型：void HaveAndian(int arr[][11], int m, int n);
* 实现功能：判断是否有鞍点，并输出结果(鞍点：此元素是这一行的最大值，同时是这一列的最小值)
* 输入项 ：共三个（数组名， 矩阵的行数， 矩阵的列数）;
* 返回值 :无;
* 自我评价：有缺陷————一开始要定义数组的第一维，是一个极大地限制条件！……
*/

void HaveAndian(int arr[][11], int m, int n){
	int i, j, k, maxj, flag = 1, flagprint = 0;//flag = 1是此列的最小值, flagprint = 0否打印过
    //输出矩阵
	printf("\t在被调函数中再输出一遍\n");
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	for (i=0; i<m; i++){
		//找出一行的最大值
		maxj = 0;
		for (j=0; j<n; j++){
			if (arr[i][j] > arr[i][maxj]){
				maxj = j;
			}
		}

		//验证是否是本列最小值
		for (k=0; k<m; k++){
			flag = 1;//假定flag = 1，是此列的最小值

			//如果有比此值还小的数字……
			if (arr[k][maxj] < arr[i][maxj]){
				flag = 0;//不是本列最小值
				break;
			}
		}
		
		//如果没有比此值还小的数字……
		if (flag == 1){
		   printf("第%d行第%d列的%d为鞍点,\n", i, maxj, arr[i][maxj]);
		   flagprint = 1;//表示已经找到并 打印鞍点
		}
	}/* the end of for */

	//如果 所有行 都判断完毕，依旧没发现鞍点，则如下处理 
	if (flagprint == 0){
		printf("此矩阵中无鞍点！\n");
	}
}
