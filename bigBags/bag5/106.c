/*
* ժ    Ҫ�� �����Լ��� ��ѧ�⣨fans, sin, cos, exp�� ������ �����׼�⺯�����Ա�
*/

#include <stdio.h>
#include <math.h>
#include "106/my_math.h"

#define NUM (-3.1415926/3)  //���������︳ֵ

void main()  
{
	printf("\tx = %f  ����Ϊ ��׼�⺯�� �ļ���ֵ\n", NUM);
	printf("my_fabs(%f) = %f   %f\n", NUM, my_fabs(NUM), fabs(NUM));
	printf("my_sin(%f) = %f   %f\n", NUM, my_sin(NUM), sin(NUM));
	printf("my_cos(%f) = %f   %f\n", NUM, my_cos(NUM), cos(NUM));
	printf("my_exp(%f) = %f   %f\n\n", NUM, my_exp(NUM), exp(NUM));
}

/*
ֱ�ӱ���:
$ gcc -std=c11 106.c 106/my_cos.c 106/my_fabs.c 106/my_sin.c 106/my_exp.c



�ֶα���:
$ cd 106 
$ gcc -std=c11 -c my_cos.c my_exp.c my_fabs.c my_sin.c

$ cd ..
$ gcc -std=c11 106.c 106/my_cos.o 106/my_fabs.o 106/my_sin.o 106/my_exp.o
*/