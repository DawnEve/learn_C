#include<stdio.h>
# define PI 3.1415926

void f1(){
	float b=PI;
	printf("in f1: PI=%f\n", b);
}

#undef PI
void main(){
	//float a=PI; // 'PI' undeclared
	float a=3; // 'PI' undeclared
	printf("in main: PI=%f\n", a);
	f1();
}
