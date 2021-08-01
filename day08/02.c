//指向函数的指针: 使用指针调用函数
#include<stdio.h>

int square(int x){
	return x*x;
}

int main(){
	int (*ptr)(int);
	ptr=square;
	printf("fn=%p, ptr=%p\n", ptr, square);
	int a0=square(15);
	int a1=ptr(15);
	printf("result, a0=%d, a1=%d\n", a0, a1);
	return 0;
}