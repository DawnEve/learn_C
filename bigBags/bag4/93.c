/*
* 摘    要： 动态分配内存————动态数组 二维动态数组

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
int main() {
	int i, j, m, n, *p = NULL;
	
	//二维动态数组
	printf("Please enter array size m,n:");
	scanf("%d,%d", &m, &n);
	p = (int *) calloc(m * n, sizeof (int));    //核心语句

	//p[i*n+j];  //像使用一维数组一样使用
	
	int arr[2][3]={ {1,2,3}, {4,5,6} };
	printf("addr of p: %p, &p: %p,   arr: %p\n", p,&p, arr);
	
    //输入
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("Pls input the element p[%d][%d] = ", i, j);//像使用二维数组一样使用
		    scanf("%d", &p[i*n+j]); // 这明明不像二维数组
		}
	}

	//输出
	for (i=0; i<m; i++)	{
		printf("Row %d\n", i);
		for (j=0; j<n; j++)	{
			printf("\t%p: p[%d][%d] = %d \n", &p[i*n+j], i, j, p[i*n+j]); //// 这明明不像二维数组
		}
		printf("\n");
	}
	
	//释放内存
	free(p);
	
	return 0;
}

	
