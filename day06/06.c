#include<stdio.h>

#define SQ(y) ((y)*(y)) 
//宏名和参数列表之间不能有空格，字符串中的形参要加小括号

int main(){
	int sq;
	sq=SQ(3)+SQ(4);
	printf("sq=%d\n", sq);
	return 0;
}
