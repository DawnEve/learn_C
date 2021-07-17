#include<stdio.h>
#include "string.h"
// 字符串长度函数strlen

int main(){
	char str1[]="This is a good book!";
	int N=strlen(str1);
	
	printf("The length of str1(%s) is %d\n", str1, N);
	
	//逐个字符输出
	for(int i=0; i<N; i++){
		putchar( str1[i] );
	}
	
	return 0;
}
