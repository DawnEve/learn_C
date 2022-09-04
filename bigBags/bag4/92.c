/*
* 摘    要： 动态分配内存————动态数组 一维动态数组

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
int main()  
{
	//一维动态数组——例7.13
 	int i, n;
	printf("Please enter array size:");
	scanf("%d", &n);                  
	
	//int *p = NULL;
	//p = (int *) malloc(n * sizeof (int));
	int *p = (int *) malloc(n * sizeof (int));
 //	…
//	p[i]       //像使用一维数组一样使用
//	…
	
    //输入
	for (i=0; i<n; i++)
	{
		printf("请输入一维数组元素p[%d] = ", i);
		scanf("%d", &p[i]);//像使用一维数组一样使用
	}

	//输出
	for (i=0; i<n; i++)
	{
		printf("一维数组p[%d] = %d\n", i, p[i]);
	}
	
	//释放 
	free(p);
	
	return 0;
}
