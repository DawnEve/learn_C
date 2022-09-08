/*
* 摘    要： 测试自己的 数学库（fans, sin, cos, exp） 函数， 并与标准库函数作对比
*/

#include <stdio.h>
#include <math.h>
#include "106/my_math.h"

#define NUM (-3.1415926/3)  //可以在这里赋值

void main()  
{
	printf("\tx = %f  后面为 标准库函数 的计算值\n", NUM);
	printf("my_fabs(%f) = %f   %f\n", NUM, my_fabs(NUM), fabs(NUM));
	printf("my_sin(%f) = %f   %f\n", NUM, my_sin(NUM), sin(NUM));
	printf("my_cos(%f) = %f   %f\n", NUM, my_cos(NUM), cos(NUM));
	printf("my_exp(%f) = %f   %f\n\n", NUM, my_exp(NUM), exp(NUM));
}

/*
直接编译:
$ gcc -std=c11 106.c 106/my_cos.c 106/my_fabs.c 106/my_sin.c 106/my_exp.c



分段编译:
$ cd 106 
$ gcc -std=c11 -c my_cos.c my_exp.c my_fabs.c my_sin.c

$ cd ..
$ gcc -std=c11 106.c 106/my_cos.o 106/my_fabs.o 106/my_sin.o 106/my_exp.o
*/