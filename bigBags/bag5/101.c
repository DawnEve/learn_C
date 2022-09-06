/*
* 摘    要：预处理命令——带参数的宏，输出两个参数相除的余数 
*/

#include <stdio.h>
#define YUSHU(a,b) a%b  //带参数的宏，输出两个参数相除的余数

void main() {
	int a, b;

	printf("Input two intergers a,b:");
	scanf("%d,%d", &a, &b);
	
	printf("%d除以%d的余数是 %d\n", a, b, YUSHU(a, b)); //带参数的宏，输出两个参数相除的余数
}