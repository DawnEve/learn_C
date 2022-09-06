/*
* 摘    要：预处理命令——带参数的宏，两个参数值互换
宏其实就是替换。
*/

#include <stdio.h>

#define SWAP(a,b) t=a; a=b; b=t    //带参数的宏，两个参数值互换

void main() {
	int a, b, t;

	printf("Input two intergers a,b:");
	scanf("%d,%d", &a, &b);
	printf("the two intergers you intput is:a=%d, b=%d\n", a,b);

	SWAP(a, b);       //带参数的宏，两个参数值互换

	printf("       the two intergers now is:a=%d, b=%d\n", a,b);
}