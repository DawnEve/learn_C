#include<stdio.h>
#include "07_fn.c"
// 文件包含

int main(){
	int x=15;
	long L=sqr(x);
	printf("%d*%d=%ld\n", x,x,L);
	return 0;
}
