/*
* 摘    要： 用并改进了自己的 数学库（fans, sin, cos, exp, integral(版本2.0)） 函数计算积分——指向函数的指针 
*/

#include <stdio.h>
#include <math.h>
#include "106/my_math.h"

double fun(double x){
	return (exp(-x));
}

void main(){
	double a=0, b=1;
	printf("\t fun (x) 在[%2.1f, %2.1f]上的积分是：%f\n", a,b, my_integral(a, b, fun));
}

/*
编译方式:
$ gcc -std=c11 107.c 106/my_integral.c 106/my_fabs.c
*/