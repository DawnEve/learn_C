#include <stdio.h>

// 怎么打印出0-9数字，作为字符

int main(){
	int i=2;
	char c=i+'0'; //'0'的ascii码 便宜i后，再转回char
	
	putchar(c);
	//putchar( i+'0');
	//putchar( i);
	//putchar( (char*)&i);
	
	return 0;
}