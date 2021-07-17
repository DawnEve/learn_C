#include<stdio.h>
// scanf() 输入字符串

int main(){
	char msg[15];
	printf("intput a string:");
	scanf("%s", msg);
	// 当用scanf函数输入字符串时，字符串中不能含有空格，否则将以空格作为串的结束符。
	
	printf("%s\n", msg);
	return 0;
}