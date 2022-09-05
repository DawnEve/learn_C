/*
* 摘    要： 动态分配内存————动态数组 二维动态数组
使用 alloc 系列函数，动态申请一块内存，放 m 行 n 列的int，并通过返回的指针赋值/初始化。

#include <stdlib.h> 
#include <alloc.h>
void* malloc(unsigned int size);
     向系统申请大小为size的内存块，把首地址返回。如果申请不成功，返回NULL
void* calloc(unsigned int num, unsigned int size);
     向系统申请num个size大小的内存块，把首地址返回。如果申请不成功，返回NULL
void free(void* p);
      释放由malloc()和calloc()申请的内存块。p是指向此块的指针
  void*类型的指针可以指向任意类型的变量 
*/

#include <stdio.h>
#include <malloc.h>
//#include <stdlib.h>

//C11 变长数组(VLA)，定义时，要把维度放前面，数组名放后面
void print(int m, int n, int p[m][n]){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("p[%d][%d]=%d  ", i,j, p[i][j]);
		}
		printf("\n");
	}
}


int main() {
	int i, j, m, n;
	
	//二维动态数组
	printf("Please enter array size m,n:");
	scanf("%d,%d", &m, &n);
	
	/*int (*p)[n] = NULL;
	p = (int (*)[n]) calloc(m * n, sizeof (int));    //核心语句*/
	int (*p)[n] = (int (*)[n]) calloc(m * n, sizeof (int));  //等价写法

	//p[i][j];  //像使用二维数组一样使用
	
	
	// 数组名 自动变 指针，指向的是其第一个子元素，相当于损失掉最高维信息。
	// 能和 高维数组名 互相替换的指针，也要损失掉最高维度。要加圆括号(*p)
	int arr[2][3]={ {1,2,3}, {4,5,6} };
	int (*pArr)[3]=arr;
	printf("\n>> arr[1][2]=%d; pArr[1][2]=%d\n\n", arr[1][2], pArr[1][2]);
	
	
	printf("addr of p: %p, &p: %p,   arr: %p\n", p,&p, arr);

	//输出: 初始化前
	print(m,n, p);

    //输入: 初始化
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("Input int for [%d][%d] = ", i, j);
		    scanf("%d", &p[i][j]); //像使用二维数组一样使用
		}
	}

	//输出
	for (i=0; i<m; i++)	{
		printf("Row %d\n", i);
		for (j=0; j<n; j++)	{
			printf("\t%p: p[%d][%d] = %d \n", &p[i][j], i, j, p[i][j]); //像使用二维数组一样使用
		}
		printf("\n");
	}
	
	//释放内存
	free(p);
	
	return 0;
}
