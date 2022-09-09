/*
* 摘    要： 自己的球字符串长度的函数   指针
*/

#include <stdio.h>
#include <string.h>

int my_strlen(char *p){
	int n = 0;
	while (*p++){
		n++;
	}
	return n;
}

void main(){
	char *a = "what is your name?";

	printf("\tthe length of\n%s \n\t is: %d %d\n", a, my_strlen(a), strlen(a));
	printf("sizeof(a):%d\n", sizeof(a));
}