/*
* ժ    Ҫ�� �ò��Ľ����Լ��� ��ѧ�⣨fans, sin, cos, exp, integral(�汾2.0)�� ����������֡���ָ������ָ�� 
*/

#include <stdio.h>
#include <math.h>
#include "106/my_math.h"

double fun(double x){
	return (exp(-x));
}

void main(){
	double a=0, b=1;
	printf("\t fun (x) ��[%2.1f, %2.1f]�ϵĻ����ǣ�%f\n", a,b, my_integral(a, b, fun));
}

/*
���뷽ʽ:
$ gcc -std=c11 107.c 106/my_integral.c 106/my_fabs.c
*/